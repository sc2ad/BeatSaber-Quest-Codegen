#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/Playables/zzzz__PlayableAsset_impl.hpp"
#include "UnityEngine/Timeline/zzzz__TimelineAsset_def.hpp"
#include "UnityEngine/Timeline/zzzz__TrackAsset_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/Timeline/zzzz__IPropertyPreview_def.hpp"
#include "UnityEngine/zzzz__ISerializationCallbackReceiver_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "UnityEngine/Timeline/zzzz__MarkerTrack_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableBinding_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "UnityEngine/Timeline/zzzz__IPropertyCollector_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/Timeline/zzzz__TimelineClip_def.hpp"
#include "UnityEngine/Timeline/zzzz__DiscreteTime_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableDirector_def.hpp"
#include "UnityEngine/Playables/zzzz__Playable_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableGraph_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/Timeline/zzzz__ClipCaps_def.hpp"
#include "UnityEngine/Timeline/zzzz__ITimelineClipAsset_def.hpp"
#include "UnityEngine/Timeline/zzzz__StandardFrameRates_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset__Versions::UnityEngine__Timeline__TimelineAsset__Versions(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset__Versions::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset__Versions::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset__Versions  UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset__Versions::Initial{0};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset__MediaType::UnityEngine__Timeline__TimelineAsset__MediaType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset__MediaType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset__MediaType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset__MediaType  UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset__MediaType::Animation{0};
constexpr UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset__MediaType  UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset__MediaType::Audio{1};
constexpr UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset__MediaType  UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset__MediaType::Texture{2};
constexpr UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset__MediaType  UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset__MediaType::Video{2};
constexpr UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset__MediaType  UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset__MediaType::Script{3};
constexpr UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset__MediaType  UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset__MediaType::Hybrid{4};
constexpr UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset__MediaType  UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset__MediaType::Group{5};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset__DurationMode::UnityEngine__Timeline__TimelineAsset__DurationMode(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset__DurationMode::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset__DurationMode::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset__DurationMode  UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset__DurationMode::BasedOnClips{0};
constexpr UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset__DurationMode  UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset__DurationMode::FixedLength{1};
//  Writing Method size for method: UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset__EditorSettings.get_fps
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset__EditorSettings::*)()>(&UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset__EditorSettings::get_fps)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2ac1f7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset__EditorSettings>::get(),
                            "get_fps",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset__EditorSettings.set_fps
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset__EditorSettings::*)(float_t)>(&UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset__EditorSettings::set_fps)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2ac1f88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset__EditorSettings>::get(),
                            "set_fps",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset__EditorSettings.get_frameRate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset__EditorSettings::*)()>(&UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset__EditorSettings::get_frameRate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ac2010;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset__EditorSettings>::get(),
                            "get_frameRate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset__EditorSettings.set_frameRate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset__EditorSettings::*)(double_t)>(&UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset__EditorSettings::set_frameRate)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2abf910;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset__EditorSettings>::get(),
                            "set_frameRate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset__EditorSettings.SetStandardFrameRate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset__EditorSettings::*)(UnityEngine::Timeline::StandardFrameRates)>(&UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset__EditorSettings::SetStandardFrameRate)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x2ac2018;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset__EditorSettings>::get(),
                            "SetStandardFrameRate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Timeline::StandardFrameRates>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset__EditorSettings.get_scenePreview
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset__EditorSettings::*)()>(&UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset__EditorSettings::get_scenePreview)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ac2134;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset__EditorSettings>::get(),
                            "get_scenePreview",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset__EditorSettings.set_scenePreview
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset__EditorSettings::*)(bool)>(&UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset__EditorSettings::set_scenePreview)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2ac213c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset__EditorSettings>::get(),
                            "set_scenePreview",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset__EditorSettings._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset__EditorSettings::*)()>(&UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset__EditorSettings::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2ac1f0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset__EditorSettings>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 void UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset__EditorSettings::__set_kMinFrameRate(double_t value)  {
::cordl_internals::setStaticField<double_t, "kMinFrameRate", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset__EditorSettings>::get>(std::forward<double_t>(value));
}
 double_t UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset__EditorSettings::__get_kMinFrameRate()  {
return ::cordl_internals::getStaticField<double_t, "kMinFrameRate", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset__EditorSettings>::get>();
}
 void UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset__EditorSettings::__set_kMaxFrameRate(double_t value)  {
::cordl_internals::setStaticField<double_t, "kMaxFrameRate", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset__EditorSettings>::get>(std::forward<double_t>(value));
}
 double_t UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset__EditorSettings::__get_kMaxFrameRate()  {
return ::cordl_internals::getStaticField<double_t, "kMaxFrameRate", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset__EditorSettings>::get>();
}
 void UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset__EditorSettings::__set_kDefaultFrameRate(double_t value)  {
::cordl_internals::setStaticField<double_t, "kDefaultFrameRate", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset__EditorSettings>::get>(std::forward<double_t>(value));
}
 double_t UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset__EditorSettings::__get_kDefaultFrameRate()  {
return ::cordl_internals::getStaticField<double_t, "kDefaultFrameRate", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset__EditorSettings>::get>();
}
constexpr void UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset__EditorSettings::__set_m_Framerate(double_t value)  {
::cordl_internals::setInstanceField<double_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<double_t>(value));
}
constexpr double_t UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset__EditorSettings::__get_m_Framerate() const {
return ::cordl_internals::getInstanceField<double_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset__EditorSettings::__set_m_ScenePreview(bool value)  {
::cordl_internals::setInstanceField<bool, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset__EditorSettings::__get_m_ScenePreview() const {
return ::cordl_internals::getInstanceField<bool, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
 float_t UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset__EditorSettings::get_fps()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset__EditorSettings>::get(),
                            "get_fps",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset__EditorSettings::set_fps(float_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset__EditorSettings>::get(),
                            "set_fps",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 double_t UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset__EditorSettings::get_frameRate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset__EditorSettings>::get(),
                            "get_frameRate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<double_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset__EditorSettings::set_frameRate(double_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset__EditorSettings>::get(),
                            "set_frameRate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset__EditorSettings::SetStandardFrameRate(UnityEngine::Timeline::StandardFrameRates enumValue)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset__EditorSettings>::get(),
                            "SetStandardFrameRate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Timeline::StandardFrameRates>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, enumValue);
}
 bool UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset__EditorSettings::get_scenePreview()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset__EditorSettings>::get(),
                            "get_scenePreview",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset__EditorSettings::set_scenePreview(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset__EditorSettings>::get(),
                            "set_scenePreview",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
// Ctor Parameters []
 UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset__EditorSettings::UnityEngine__Timeline__TimelineAsset__EditorSettings()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<UnityEngine__Timeline__TimelineAsset__EditorSettings>())) {}
 void UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset__EditorSettings::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset__EditorSettings>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset___get_outputs_d__27._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset___get_outputs_d__27::*)(int32_t)>(&UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset___get_outputs_d__27::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2abee94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset___get_outputs_d__27>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset___get_outputs_d__27.System_IDisposable_Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset___get_outputs_d__27::*)()>(&UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset___get_outputs_d__27::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x2ac21cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset___get_outputs_d__27>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset___get_outputs_d__27.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset___get_outputs_d__27::*)()>(&UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset___get_outputs_d__27::MoveNext)> {
  constexpr static std::size_t size = 0x468;
  constexpr static std::size_t addrs = 0x2ac2284;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset___get_outputs_d__27>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset___get_outputs_d__27.__m__Finally1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset___get_outputs_d__27::*)()>(&UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset___get_outputs_d__27::__m__Finally1)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2ac279c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset___get_outputs_d__27>::get(),
                            "<>m__Finally1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset___get_outputs_d__27.__m__Finally2
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset___get_outputs_d__27::*)()>(&UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset___get_outputs_d__27::__m__Finally2)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2ac26ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset___get_outputs_d__27>::get(),
                            "<>m__Finally2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset___get_outputs_d__27.System_Collections_Generic_IEnumerator_UnityEngine_Playables_PlayableBinding__get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Playables::PlayableBinding (UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset___get_outputs_d__27::*)()>(&UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset___get_outputs_d__27::System_Collections_Generic_IEnumerator_UnityEngine_Playables_PlayableBinding__get_Current)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2ac284c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset___get_outputs_d__27>::get(),
                            "System.Collections.Generic.IEnumerator<UnityEngine.Playables.PlayableBinding>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset___get_outputs_d__27.System_Collections_IEnumerator_Reset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset___get_outputs_d__27::*)()>(&UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset___get_outputs_d__27::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2ac285c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset___get_outputs_d__27>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset___get_outputs_d__27.System_Collections_IEnumerator_get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset___get_outputs_d__27::*)()>(&UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset___get_outputs_d__27::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2ac289c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset___get_outputs_d__27>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset___get_outputs_d__27.System_Collections_Generic_IEnumerable_UnityEngine_Playables_PlayableBinding__GetEnumerator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IEnumerator_1<UnityEngine::Playables::PlayableBinding> (UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset___get_outputs_d__27::*)()>(&UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset___get_outputs_d__27::System_Collections_Generic_IEnumerable_UnityEngine_Playables_PlayableBinding__GetEnumerator)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x2ac28fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset___get_outputs_d__27>::get(),
                            "System.Collections.Generic.IEnumerable<UnityEngine.Playables.PlayableBinding>.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset___get_outputs_d__27.System_Collections_IEnumerable_GetEnumerator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerator (UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset___get_outputs_d__27::*)()>(&UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset___get_outputs_d__27::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2ac29a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset___get_outputs_d__27>::get(),
                            "System.Collections.IEnumerable.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<UnityEngine::Playables::PlayableBinding>
constexpr  UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset___get_outputs_d__27::operator System::Collections::Generic::IEnumerable_1<UnityEngine::Playables::PlayableBinding>() const noexcept {
return System::Collections::Generic::IEnumerable_1<UnityEngine::Playables::PlayableBinding>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Collections::IEnumerable
constexpr  UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset___get_outputs_d__27::operator System::Collections::IEnumerable() const noexcept {
return System::Collections::IEnumerable(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<UnityEngine::Playables::PlayableBinding>
constexpr  UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset___get_outputs_d__27::operator System::Collections::Generic::IEnumerator_1<UnityEngine::Playables::PlayableBinding>() const noexcept {
return System::Collections::Generic::IEnumerator_1<UnityEngine::Playables::PlayableBinding>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Collections::IEnumerator
constexpr  UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset___get_outputs_d__27::operator System::Collections::IEnumerator() const noexcept {
return System::Collections::IEnumerator(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::IDisposable
constexpr  UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset___get_outputs_d__27::operator System::IDisposable() const noexcept {
return System::IDisposable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset___get_outputs_d__27::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset___get_outputs_d__27::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset___get_outputs_d__27::__set___2__current(UnityEngine::Playables::PlayableBinding value)  {
::cordl_internals::setInstanceField<UnityEngine::Playables::PlayableBinding, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Playables::PlayableBinding>(value));
}
constexpr UnityEngine::Playables::PlayableBinding UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset___get_outputs_d__27::__get___2__current() const {
return ::cordl_internals::getInstanceField<UnityEngine::Playables::PlayableBinding, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset___get_outputs_d__27::__set___l__initialThreadId(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset___get_outputs_d__27::__get___l__initialThreadId() const {
return ::cordl_internals::getInstanceField<int32_t, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset___get_outputs_d__27::__set___4__this(UnityEngine::Timeline::TimelineAsset value)  {
::cordl_internals::setInstanceField<UnityEngine::Timeline::TimelineAsset, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Timeline::TimelineAsset>(value));
}
constexpr UnityEngine::Timeline::TimelineAsset UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset___get_outputs_d__27::__get___4__this() const {
return ::cordl_internals::getInstanceField<UnityEngine::Timeline::TimelineAsset, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset___get_outputs_d__27::__set___7__wrap1(System::Collections::Generic::IEnumerator_1<UnityEngine::Timeline::TrackAsset> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::IEnumerator_1<UnityEngine::Timeline::TrackAsset>, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::IEnumerator_1<UnityEngine::Timeline::TrackAsset>>(value));
}
constexpr System::Collections::Generic::IEnumerator_1<UnityEngine::Timeline::TrackAsset> UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset___get_outputs_d__27::__get___7__wrap1() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::IEnumerator_1<UnityEngine::Timeline::TrackAsset>, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset___get_outputs_d__27::__set___7__wrap2(System::Collections::Generic::IEnumerator_1<UnityEngine::Playables::PlayableBinding> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::IEnumerator_1<UnityEngine::Playables::PlayableBinding>, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::IEnumerator_1<UnityEngine::Playables::PlayableBinding>>(value));
}
constexpr System::Collections::Generic::IEnumerator_1<UnityEngine::Playables::PlayableBinding> UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset___get_outputs_d__27::__get___7__wrap2() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::IEnumerator_1<UnityEngine::Playables::PlayableBinding>, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
 UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset___get_outputs_d__27::UnityEngine__Timeline__TimelineAsset___get_outputs_d__27(int32_t __1__state)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<UnityEngine__Timeline__TimelineAsset___get_outputs_d__27>(__1__state))) {}
 void UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset___get_outputs_d__27::_ctor(int32_t __1__state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset___get_outputs_d__27>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, __1__state);
}
 void UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset___get_outputs_d__27::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset___get_outputs_d__27>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset___get_outputs_d__27::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset___get_outputs_d__27>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset___get_outputs_d__27::__m__Finally1()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset___get_outputs_d__27>::get(),
                            "<>m__Finally1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset___get_outputs_d__27::__m__Finally2()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset___get_outputs_d__27>::get(),
                            "<>m__Finally2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::Playables::PlayableBinding UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset___get_outputs_d__27::System_Collections_Generic_IEnumerator_UnityEngine_Playables_PlayableBinding__get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset___get_outputs_d__27>::get(),
                            "System.Collections.Generic.IEnumerator<UnityEngine.Playables.PlayableBinding>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Playables::PlayableBinding, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset___get_outputs_d__27::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset___get_outputs_d__27>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset___get_outputs_d__27::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset___get_outputs_d__27>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::Generic::IEnumerator_1<UnityEngine::Playables::PlayableBinding> UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset___get_outputs_d__27::System_Collections_Generic_IEnumerable_UnityEngine_Playables_PlayableBinding__GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset___get_outputs_d__27>::get(),
                            "System.Collections.Generic.IEnumerable<UnityEngine.Playables.PlayableBinding>.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::IEnumerator_1<UnityEngine::Playables::PlayableBinding>, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::IEnumerator UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset___get_outputs_d__27::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset___get_outputs_d__27>::get(),
                            "System.Collections.IEnumerable.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::IEnumerator, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: UnityEngine::Timeline::TimelineAsset.UpgradeToLatestVersion
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::TimelineAsset::*)()>(&UnityEngine::Timeline::TimelineAsset::UpgradeToLatestVersion)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2abea28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineAsset>::get(),
                            "UpgradeToLatestVersion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Timeline::TimelineAsset.get_editorSettings
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset__EditorSettings (UnityEngine::Timeline::TimelineAsset::*)()>(&UnityEngine::Timeline::TimelineAsset::get_editorSettings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2abea2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineAsset>::get(),
                            "get_editorSettings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Timeline::TimelineAsset.get_duration
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (UnityEngine::Timeline::TimelineAsset::*)()>(&UnityEngine::Timeline::TimelineAsset::get_duration)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x2abea34;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::Timeline::TimelineAsset),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineAsset>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Timeline::TimelineAsset.get_fixedDuration
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (UnityEngine::Timeline::TimelineAsset::*)()>(&UnityEngine::Timeline::TimelineAsset::get_fixedDuration)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x2abecc8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineAsset>::get(),
                            "get_fixedDuration",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Timeline::TimelineAsset.set_fixedDuration
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::TimelineAsset::*)(double_t)>(&UnityEngine::Timeline::TimelineAsset::set_fixedDuration)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2abed9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineAsset>::get(),
                            "set_fixedDuration",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Timeline::TimelineAsset.get_durationMode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset__DurationMode (UnityEngine::Timeline::TimelineAsset::*)()>(&UnityEngine::Timeline::TimelineAsset::get_durationMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2abee0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineAsset>::get(),
                            "get_durationMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Timeline::TimelineAsset.set_durationMode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::TimelineAsset::*)(UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset__DurationMode)>(&UnityEngine::Timeline::TimelineAsset::set_durationMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2abee14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineAsset>::get(),
                            "set_durationMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset__DurationMode>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Timeline::TimelineAsset.get_outputs
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IEnumerable_1<UnityEngine::Playables::PlayableBinding> (UnityEngine::Timeline::TimelineAsset::*)()>(&UnityEngine::Timeline::TimelineAsset::get_outputs)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2abee1c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::Timeline::TimelineAsset),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineAsset>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Timeline::TimelineAsset.get_clipCaps
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Timeline::ClipCaps (UnityEngine::Timeline::TimelineAsset::*)()>(&UnityEngine::Timeline::TimelineAsset::get_clipCaps)> {
  constexpr static std::size_t size = 0x350;
  constexpr static std::size_t addrs = 0x2abeec8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineAsset>::get(),
                            "get_clipCaps",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Timeline::TimelineAsset.get_outputTrackCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (UnityEngine::Timeline::TimelineAsset::*)()>(&UnityEngine::Timeline::TimelineAsset::get_outputTrackCount)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2abf230;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineAsset>::get(),
                            "get_outputTrackCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Timeline::TimelineAsset.get_rootTrackCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (UnityEngine::Timeline::TimelineAsset::*)()>(&UnityEngine::Timeline::TimelineAsset::get_rootTrackCount)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2abf47c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineAsset>::get(),
                            "get_rootTrackCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Timeline::TimelineAsset.OnValidate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::TimelineAsset::*)()>(&UnityEngine::Timeline::TimelineAsset::OnValidate)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2abf83c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineAsset>::get(),
                            "OnValidate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Timeline::TimelineAsset.GetRootTrack
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Timeline::TrackAsset (UnityEngine::Timeline::TimelineAsset::*)(int32_t)>(&UnityEngine::Timeline::TimelineAsset::GetRootTrack)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2abf928;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineAsset>::get(),
                            "GetRootTrack",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Timeline::TimelineAsset.GetRootTracks
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IEnumerable_1<UnityEngine::Timeline::TrackAsset> (UnityEngine::Timeline::TimelineAsset::*)()>(&UnityEngine::Timeline::TimelineAsset::GetRootTracks)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2abf218;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineAsset>::get(),
                            "GetRootTracks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Timeline::TimelineAsset.GetOutputTrack
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Timeline::TrackAsset (UnityEngine::Timeline::TimelineAsset::*)(int32_t)>(&UnityEngine::Timeline::TimelineAsset::GetOutputTrack)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2abf988;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineAsset>::get(),
                            "GetOutputTrack",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Timeline::TimelineAsset.GetOutputTracks
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IEnumerable_1<UnityEngine::Timeline::TrackAsset> (UnityEngine::Timeline::TimelineAsset::*)()>(&UnityEngine::Timeline::TimelineAsset::GetOutputTracks)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2abf9cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineAsset>::get(),
                            "GetOutputTracks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Timeline::TimelineAsset.GetValidFrameRate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (*)(double_t)>(&UnityEngine::Timeline::TimelineAsset::GetValidFrameRate)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x2abf864;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineAsset>::get(),
                            "GetValidFrameRate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Timeline::TimelineAsset.UpdateRootTrackCache
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::TimelineAsset::*)()>(&UnityEngine::Timeline::TimelineAsset::UpdateRootTrackCache)> {
  constexpr static std::size_t size = 0x370;
  constexpr static std::size_t addrs = 0x2abf4cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineAsset>::get(),
                            "UpdateRootTrackCache",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Timeline::TimelineAsset.UpdateOutputTrackCache
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::TimelineAsset::*)()>(&UnityEngine::Timeline::TimelineAsset::UpdateOutputTrackCache)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x2abf254;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineAsset>::get(),
                            "UpdateOutputTrackCache",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Timeline::TimelineAsset.get_flattenedTracks
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<UnityEngine::Timeline::TrackAsset> (UnityEngine::Timeline::TimelineAsset::*)()>(&UnityEngine::Timeline::TimelineAsset::get_flattenedTracks)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x2abf9e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineAsset>::get(),
                            "get_flattenedTracks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Timeline::TimelineAsset.get_markerTrack
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Timeline::MarkerTrack (UnityEngine::Timeline::TimelineAsset::*)()>(&UnityEngine::Timeline::TimelineAsset::get_markerTrack)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2abfe84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineAsset>::get(),
                            "get_markerTrack",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Timeline::TimelineAsset.get_trackObjects
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::List_1<UnityEngine::ScriptableObject> (UnityEngine::Timeline::TimelineAsset::*)()>(&UnityEngine::Timeline::TimelineAsset::get_trackObjects)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2abfe8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineAsset>::get(),
                            "get_trackObjects",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Timeline::TimelineAsset.AddTrackInternal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::TimelineAsset::*)(UnityEngine::Timeline::TrackAsset)>(&UnityEngine::Timeline::TimelineAsset::AddTrackInternal)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x2abfe94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineAsset>::get(),
                            "AddTrackInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Timeline::TrackAsset>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Timeline::TimelineAsset.RemoveTrack
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::TimelineAsset::*)(UnityEngine::Timeline::TrackAsset)>(&UnityEngine::Timeline::TimelineAsset::RemoveTrack)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x2abff58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineAsset>::get(),
                            "RemoveTrack",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Timeline::TrackAsset>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Timeline::TimelineAsset.CreatePlayable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Playables::Playable (UnityEngine::Timeline::TimelineAsset::*)(UnityEngine::Playables::PlayableGraph, UnityEngine::GameObject)>(&UnityEngine::Timeline::TimelineAsset::CreatePlayable)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x2ac00dc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::Timeline::TimelineAsset),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineAsset>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Timeline::TimelineAsset.UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::TimelineAsset::*)()>(&UnityEngine::Timeline::TimelineAsset::UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ac02a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineAsset>::get(),
                            "UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Timeline::TimelineAsset.UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::TimelineAsset::*)()>(&UnityEngine::Timeline::TimelineAsset::UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2ac02a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineAsset>::get(),
                            "UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Timeline::TimelineAsset.__internalAwake
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::TimelineAsset::*)()>(&UnityEngine::Timeline::TimelineAsset::__internalAwake)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x2ac02b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineAsset>::get(),
                            "__internalAwake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Timeline::TimelineAsset.GatherProperties
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::TimelineAsset::*)(UnityEngine::Playables::PlayableDirector, UnityEngine::Timeline::IPropertyCollector)>(&UnityEngine::Timeline::TimelineAsset::GatherProperties)> {
  constexpr static std::size_t size = 0x31c;
  constexpr static std::size_t addrs = 0x2ac041c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineAsset>::get(),
                            "GatherProperties",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Playables::PlayableDirector>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Timeline::IPropertyCollector>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Timeline::TimelineAsset.CreateMarkerTrack
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::TimelineAsset::*)()>(&UnityEngine::Timeline::TimelineAsset::CreateMarkerTrack)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x2ac08c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineAsset>::get(),
                            "CreateMarkerTrack",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Timeline::TimelineAsset.Invalidate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::TimelineAsset::*)()>(&UnityEngine::Timeline::TimelineAsset::Invalidate)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2abff4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineAsset>::get(),
                            "Invalidate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Timeline::TimelineAsset.UpdateFixedDurationWithItemsDuration
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::TimelineAsset::*)()>(&UnityEngine::Timeline::TimelineAsset::UpdateFixedDurationWithItemsDuration)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2ac0990;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineAsset>::get(),
                            "UpdateFixedDurationWithItemsDuration",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Timeline::TimelineAsset.CalculateItemsDuration
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Timeline::DiscreteTime (UnityEngine::Timeline::TimelineAsset::*)()>(&UnityEngine::Timeline::TimelineAsset::CalculateItemsDuration)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x2abeae8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineAsset>::get(),
                            "CalculateItemsDuration",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Timeline::TimelineAsset.AddSubTracksRecursive
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::Timeline::TrackAsset, ByRef<System::Collections::Generic::List_1<UnityEngine::Timeline::TrackAsset>>)>(&UnityEngine::Timeline::TimelineAsset::AddSubTracksRecursive)> {
  constexpr static std::size_t size = 0x34c;
  constexpr static std::size_t addrs = 0x2abfb38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineAsset>::get(),
                            "AddSubTracksRecursive",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Timeline::TrackAsset>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Collections::Generic::List_1<UnityEngine::Timeline::TrackAsset>>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Timeline::TimelineAsset.CreateTrack
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Timeline::TrackAsset (UnityEngine::Timeline::TimelineAsset::*)(System::Type, UnityEngine::Timeline::TrackAsset, ::StringW)>(&UnityEngine::Timeline::TimelineAsset::CreateTrack)> {
  constexpr static std::size_t size = 0x308;
  constexpr static std::size_t addrs = 0x2ac0b2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineAsset>::get(),
                            "CreateTrack",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Timeline::TrackAsset>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Timeline::TimelineAsset.DeleteClip
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Timeline::TimelineAsset::*)(UnityEngine::Timeline::TimelineClip)>(&UnityEngine::Timeline::TimelineAsset::DeleteClip)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x2ac1218;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineAsset>::get(),
                            "DeleteClip",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Timeline::TimelineClip>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Timeline::TimelineAsset.DeleteTrack
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Timeline::TimelineAsset::*)(UnityEngine::Timeline::TrackAsset)>(&UnityEngine::Timeline::TimelineAsset::DeleteTrack)> {
  constexpr static std::size_t size = 0x540;
  constexpr static std::size_t addrs = 0x2ac153c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineAsset>::get(),
                            "DeleteTrack",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Timeline::TrackAsset>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Timeline::TimelineAsset.MoveLastTrackBefore
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::TimelineAsset::*)(UnityEngine::Timeline::TrackAsset)>(&UnityEngine::Timeline::TimelineAsset::MoveLastTrackBefore)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x2ac1bc8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineAsset>::get(),
                            "MoveLastTrackBefore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Timeline::TrackAsset>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Timeline::TimelineAsset.AllocateTrack
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Timeline::TrackAsset (UnityEngine::Timeline::TimelineAsset::*)(UnityEngine::Timeline::TrackAsset, ::StringW, System::Type)>(&UnityEngine::Timeline::TimelineAsset::AllocateTrack)> {
  constexpr static std::size_t size = 0x278;
  constexpr static std::size_t addrs = 0x2ac0fa0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineAsset>::get(),
                            "AllocateTrack",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Timeline::TrackAsset>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Timeline::TimelineAsset.DeleteRecordedAnimation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::TimelineAsset::*)(UnityEngine::Timeline::TrackAsset)>(&UnityEngine::Timeline::TimelineAsset::DeleteRecordedAnimation)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x2ac1a7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineAsset>::get(),
                            "DeleteRecordedAnimation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Timeline::TrackAsset>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Timeline::TimelineAsset.DeleteRecordedAnimation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::TimelineAsset::*)(UnityEngine::Timeline::TimelineClip)>(&UnityEngine::Timeline::TimelineAsset::DeleteRecordedAnimation)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x2ac13e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineAsset>::get(),
                            "DeleteRecordedAnimation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Timeline::TimelineClip>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Timeline::TimelineAsset._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::TimelineAsset::*)()>(&UnityEngine::Timeline::TimelineAsset::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2ac1ea8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineAsset>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to UnityEngine::ISerializationCallbackReceiver
constexpr  UnityEngine::Timeline::TimelineAsset::operator UnityEngine::ISerializationCallbackReceiver() const noexcept {
return UnityEngine::ISerializationCallbackReceiver(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to UnityEngine::Timeline::ITimelineClipAsset
constexpr  UnityEngine::Timeline::TimelineAsset::operator UnityEngine::Timeline::ITimelineClipAsset() const noexcept {
return UnityEngine::Timeline::ITimelineClipAsset(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to UnityEngine::Timeline::IPropertyPreview
constexpr  UnityEngine::Timeline::TimelineAsset::operator UnityEngine::Timeline::IPropertyPreview() const noexcept {
return UnityEngine::Timeline::IPropertyPreview(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::Timeline::TimelineAsset::__set_m_Version(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::Timeline::TimelineAsset::__get_m_Version() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::Timeline::TimelineAsset::__set_m_Tracks(System::Collections::Generic::List_1<UnityEngine::ScriptableObject> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<UnityEngine::ScriptableObject>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::List_1<UnityEngine::ScriptableObject>>(value));
}
constexpr System::Collections::Generic::List_1<UnityEngine::ScriptableObject> UnityEngine::Timeline::TimelineAsset::__get_m_Tracks() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<UnityEngine::ScriptableObject>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::Timeline::TimelineAsset::__set_m_FixedDuration(double_t value)  {
::cordl_internals::setInstanceField<double_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<double_t>(value));
}
constexpr double_t UnityEngine::Timeline::TimelineAsset::__get_m_FixedDuration() const {
return ::cordl_internals::getInstanceField<double_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::Timeline::TimelineAsset::__set_m_CacheOutputTracks(::ArrayW<UnityEngine::Timeline::TrackAsset> value)  {
::cordl_internals::setInstanceField<::ArrayW<UnityEngine::Timeline::TrackAsset>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<UnityEngine::Timeline::TrackAsset>>(value));
}
constexpr ::ArrayW<UnityEngine::Timeline::TrackAsset> UnityEngine::Timeline::TimelineAsset::__get_m_CacheOutputTracks() const {
return ::cordl_internals::getInstanceField<::ArrayW<UnityEngine::Timeline::TrackAsset>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::Timeline::TimelineAsset::__set_m_CacheRootTracks(System::Collections::Generic::List_1<UnityEngine::Timeline::TrackAsset> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<UnityEngine::Timeline::TrackAsset>, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::List_1<UnityEngine::Timeline::TrackAsset>>(value));
}
constexpr System::Collections::Generic::List_1<UnityEngine::Timeline::TrackAsset> UnityEngine::Timeline::TimelineAsset::__get_m_CacheRootTracks() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<UnityEngine::Timeline::TrackAsset>, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::Timeline::TimelineAsset::__set_m_CacheFlattenedTracks(::ArrayW<UnityEngine::Timeline::TrackAsset> value)  {
::cordl_internals::setInstanceField<::ArrayW<UnityEngine::Timeline::TrackAsset>, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<UnityEngine::Timeline::TrackAsset>>(value));
}
constexpr ::ArrayW<UnityEngine::Timeline::TrackAsset> UnityEngine::Timeline::TimelineAsset::__get_m_CacheFlattenedTracks() const {
return ::cordl_internals::getInstanceField<::ArrayW<UnityEngine::Timeline::TrackAsset>, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::Timeline::TimelineAsset::__set_m_EditorSettings(UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset__EditorSettings value)  {
::cordl_internals::setInstanceField<UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset__EditorSettings, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset__EditorSettings>(value));
}
constexpr UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset__EditorSettings UnityEngine::Timeline::TimelineAsset::__get_m_EditorSettings() const {
return ::cordl_internals::getInstanceField<UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset__EditorSettings, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::Timeline::TimelineAsset::__set_m_DurationMode(UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset__DurationMode value)  {
::cordl_internals::setInstanceField<UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset__DurationMode, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset__DurationMode>(value));
}
constexpr UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset__DurationMode UnityEngine::Timeline::TimelineAsset::__get_m_DurationMode() const {
return ::cordl_internals::getInstanceField<UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset__DurationMode, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::Timeline::TimelineAsset::__set_m_MarkerTrack(UnityEngine::Timeline::MarkerTrack value)  {
::cordl_internals::setInstanceField<UnityEngine::Timeline::MarkerTrack, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Timeline::MarkerTrack>(value));
}
constexpr UnityEngine::Timeline::MarkerTrack UnityEngine::Timeline::TimelineAsset::__get_m_MarkerTrack() const {
return ::cordl_internals::getInstanceField<UnityEngine::Timeline::MarkerTrack, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void UnityEngine::Timeline::TimelineAsset::UpgradeToLatestVersion()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineAsset>::get(),
                            "UpgradeToLatestVersion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset__EditorSettings UnityEngine::Timeline::TimelineAsset::get_editorSettings()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineAsset>::get(),
                            "get_editorSettings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset__EditorSettings, false>(const_cast<void*>(instance), ___internal_method);
}
 double_t UnityEngine::Timeline::TimelineAsset::get_duration()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineAsset>::get(),
                            "get_duration",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<double_t, false>(const_cast<void*>(instance), ___internal_method);
}
 double_t UnityEngine::Timeline::TimelineAsset::get_fixedDuration()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineAsset>::get(),
                            "get_fixedDuration",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<double_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::Timeline::TimelineAsset::set_fixedDuration(double_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineAsset>::get(),
                            "set_fixedDuration",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset__DurationMode UnityEngine::Timeline::TimelineAsset::get_durationMode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineAsset>::get(),
                            "get_durationMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset__DurationMode, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::Timeline::TimelineAsset::set_durationMode(UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset__DurationMode value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineAsset>::get(),
                            "set_durationMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Timeline::UnityEngine__Timeline__TimelineAsset__DurationMode>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 System::Collections::Generic::IEnumerable_1<UnityEngine::Playables::PlayableBinding> UnityEngine::Timeline::TimelineAsset::get_outputs()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineAsset>::get(),
                            "get_outputs",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::IEnumerable_1<UnityEngine::Playables::PlayableBinding>, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::Timeline::ClipCaps UnityEngine::Timeline::TimelineAsset::get_clipCaps()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineAsset>::get(),
                            "get_clipCaps",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Timeline::ClipCaps, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t UnityEngine::Timeline::TimelineAsset::get_outputTrackCount()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineAsset>::get(),
                            "get_outputTrackCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t UnityEngine::Timeline::TimelineAsset::get_rootTrackCount()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineAsset>::get(),
                            "get_rootTrackCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::Timeline::TimelineAsset::OnValidate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineAsset>::get(),
                            "OnValidate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::Timeline::TrackAsset UnityEngine::Timeline::TimelineAsset::GetRootTrack(int32_t index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineAsset>::get(),
                            "GetRootTrack",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Timeline::TrackAsset, false>(const_cast<void*>(instance), ___internal_method, index);
}
 System::Collections::Generic::IEnumerable_1<UnityEngine::Timeline::TrackAsset> UnityEngine::Timeline::TimelineAsset::GetRootTracks()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineAsset>::get(),
                            "GetRootTracks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::IEnumerable_1<UnityEngine::Timeline::TrackAsset>, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::Timeline::TrackAsset UnityEngine::Timeline::TimelineAsset::GetOutputTrack(int32_t index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineAsset>::get(),
                            "GetOutputTrack",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Timeline::TrackAsset, false>(const_cast<void*>(instance), ___internal_method, index);
}
 System::Collections::Generic::IEnumerable_1<UnityEngine::Timeline::TrackAsset> UnityEngine::Timeline::TimelineAsset::GetOutputTracks()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineAsset>::get(),
                            "GetOutputTracks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::IEnumerable_1<UnityEngine::Timeline::TrackAsset>, false>(const_cast<void*>(instance), ___internal_method);
}
 double_t UnityEngine::Timeline::TimelineAsset::GetValidFrameRate(double_t frameRate)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineAsset>::get(),
                            "GetValidFrameRate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<double_t, false>(nullptr, ___internal_method, frameRate);
}
 void UnityEngine::Timeline::TimelineAsset::UpdateRootTrackCache()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineAsset>::get(),
                            "UpdateRootTrackCache",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::Timeline::TimelineAsset::UpdateOutputTrackCache()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineAsset>::get(),
                            "UpdateOutputTrackCache",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::ArrayW<UnityEngine::Timeline::TrackAsset> UnityEngine::Timeline::TimelineAsset::get_flattenedTracks()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineAsset>::get(),
                            "get_flattenedTracks",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<UnityEngine::Timeline::TrackAsset>, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::Timeline::MarkerTrack UnityEngine::Timeline::TimelineAsset::get_markerTrack()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineAsset>::get(),
                            "get_markerTrack",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Timeline::MarkerTrack, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::Generic::List_1<UnityEngine::ScriptableObject> UnityEngine::Timeline::TimelineAsset::get_trackObjects()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineAsset>::get(),
                            "get_trackObjects",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::List_1<UnityEngine::ScriptableObject>, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::Timeline::TimelineAsset::AddTrackInternal(UnityEngine::Timeline::TrackAsset track)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineAsset>::get(),
                            "AddTrackInternal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Timeline::TrackAsset>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, track);
}
 void UnityEngine::Timeline::TimelineAsset::RemoveTrack(UnityEngine::Timeline::TrackAsset track)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineAsset>::get(),
                            "RemoveTrack",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Timeline::TrackAsset>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, track);
}
 UnityEngine::Playables::Playable UnityEngine::Timeline::TimelineAsset::CreatePlayable(UnityEngine::Playables::PlayableGraph graph, UnityEngine::GameObject go)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineAsset>::get(),
                            "CreatePlayable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Playables::PlayableGraph>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::GameObject>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Playables::Playable, false>(const_cast<void*>(instance), ___internal_method, graph, go);
}
 void UnityEngine::Timeline::TimelineAsset::UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineAsset>::get(),
                            "UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::Timeline::TimelineAsset::UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineAsset>::get(),
                            "UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::Timeline::TimelineAsset::__internalAwake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineAsset>::get(),
                            "__internalAwake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::Timeline::TimelineAsset::GatherProperties(UnityEngine::Playables::PlayableDirector director, UnityEngine::Timeline::IPropertyCollector driver)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineAsset>::get(),
                            "GatherProperties",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Playables::PlayableDirector>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Timeline::IPropertyCollector>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, director, driver);
}
 void UnityEngine::Timeline::TimelineAsset::CreateMarkerTrack()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineAsset>::get(),
                            "CreateMarkerTrack",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::Timeline::TimelineAsset::Invalidate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineAsset>::get(),
                            "Invalidate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::Timeline::TimelineAsset::UpdateFixedDurationWithItemsDuration()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineAsset>::get(),
                            "UpdateFixedDurationWithItemsDuration",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::Timeline::DiscreteTime UnityEngine::Timeline::TimelineAsset::CalculateItemsDuration()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineAsset>::get(),
                            "CalculateItemsDuration",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Timeline::DiscreteTime, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::Timeline::TimelineAsset::AddSubTracksRecursive(UnityEngine::Timeline::TrackAsset track, ByRef<System::Collections::Generic::List_1<UnityEngine::Timeline::TrackAsset>> allTracks)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineAsset>::get(),
                            "AddSubTracksRecursive",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Timeline::TrackAsset>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<System::Collections::Generic::List_1<UnityEngine::Timeline::TrackAsset>>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, track, allTracks);
}
 UnityEngine::Timeline::TrackAsset UnityEngine::Timeline::TimelineAsset::CreateTrack(System::Type type, UnityEngine::Timeline::TrackAsset parent, ::StringW name)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineAsset>::get(),
                            "CreateTrack",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Timeline::TrackAsset>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Timeline::TrackAsset, false>(const_cast<void*>(instance), ___internal_method, type, parent, name);
}
template<typename T>
 T UnityEngine::Timeline::TimelineAsset::CreateTrack(UnityEngine::Timeline::TrackAsset parent, ::StringW trackName)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineAsset>::get(),
                        "CreateTrack",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Timeline::TrackAsset>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<T, false>(const_cast<void*>(instance), ___internal_method, parent, trackName);
}
template<typename T>
 T UnityEngine::Timeline::TimelineAsset::CreateTrack(::StringW trackName)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineAsset>::get(),
                        "CreateTrack",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<T, false>(const_cast<void*>(instance), ___internal_method, trackName);
}
template<typename T>
 T UnityEngine::Timeline::TimelineAsset::CreateTrack()  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineAsset>::get(),
                        "CreateTrack",
                        std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                        ::std::vector<const Il2CppType*>{}
                    )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                        ___internal_method_base,
                         std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                        ));
return ::cordl_internals::RunMethodRethrow<T, false>(const_cast<void*>(instance), ___internal_method);
}
 bool UnityEngine::Timeline::TimelineAsset::DeleteClip(UnityEngine::Timeline::TimelineClip clip)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineAsset>::get(),
                            "DeleteClip",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Timeline::TimelineClip>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, clip);
}
 bool UnityEngine::Timeline::TimelineAsset::DeleteTrack(UnityEngine::Timeline::TrackAsset track)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineAsset>::get(),
                            "DeleteTrack",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Timeline::TrackAsset>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, track);
}
 void UnityEngine::Timeline::TimelineAsset::MoveLastTrackBefore(UnityEngine::Timeline::TrackAsset asset)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineAsset>::get(),
                            "MoveLastTrackBefore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Timeline::TrackAsset>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, asset);
}
 UnityEngine::Timeline::TrackAsset UnityEngine::Timeline::TimelineAsset::AllocateTrack(UnityEngine::Timeline::TrackAsset trackAssetParent, ::StringW trackName, System::Type trackType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineAsset>::get(),
                            "AllocateTrack",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Timeline::TrackAsset>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Type>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Timeline::TrackAsset, false>(const_cast<void*>(instance), ___internal_method, trackAssetParent, trackName, trackType);
}
 void UnityEngine::Timeline::TimelineAsset::DeleteRecordedAnimation(UnityEngine::Timeline::TrackAsset track)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineAsset>::get(),
                            "DeleteRecordedAnimation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Timeline::TrackAsset>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, track);
}
 void UnityEngine::Timeline::TimelineAsset::DeleteRecordedAnimation(UnityEngine::Timeline::TimelineClip clip)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineAsset>::get(),
                            "DeleteRecordedAnimation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Timeline::TimelineClip>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, clip);
}
// Ctor Parameters []
 UnityEngine::Timeline::TimelineAsset::TimelineAsset()  : UnityEngine::Playables::PlayableAsset(THROW_UNLESS(::il2cpp_utils::New<TimelineAsset>())) {}
 void UnityEngine::Timeline::TimelineAsset::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineAsset>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
