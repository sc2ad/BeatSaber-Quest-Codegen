#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "UnityEngine/Playables/zzzz__FrameData_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableOutput_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Playables::____UnityEngine__Playables__FrameData__Flags::____UnityEngine__Playables__FrameData__Flags(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::UnityEngine::Playables::____UnityEngine__Playables__FrameData__Flags::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::Playables::____UnityEngine__Playables__FrameData__Flags::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::UnityEngine::Playables::____UnityEngine__Playables__FrameData__Flags  ::UnityEngine::Playables::____UnityEngine__Playables__FrameData__Flags::Evaluate{1};
constexpr ::UnityEngine::Playables::____UnityEngine__Playables__FrameData__Flags  ::UnityEngine::Playables::____UnityEngine__Playables__FrameData__Flags::SeekOccured{2};
constexpr ::UnityEngine::Playables::____UnityEngine__Playables__FrameData__Flags  ::UnityEngine::Playables::____UnityEngine__Playables__FrameData__Flags::Loop{4};
constexpr ::UnityEngine::Playables::____UnityEngine__Playables__FrameData__Flags  ::UnityEngine::Playables::____UnityEngine__Playables__FrameData__Flags::Hold{8};
constexpr ::UnityEngine::Playables::____UnityEngine__Playables__FrameData__Flags  ::UnityEngine::Playables::____UnityEngine__Playables__FrameData__Flags::EffectivePlayStateDelayed{16};
constexpr ::UnityEngine::Playables::____UnityEngine__Playables__FrameData__Flags  ::UnityEngine::Playables::____UnityEngine__Playables__FrameData__Flags::EffectivePlayStatePlaying{32};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Playables::____UnityEngine__Playables__FrameData__EvaluationType::____UnityEngine__Playables__FrameData__EvaluationType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::UnityEngine::Playables::____UnityEngine__Playables__FrameData__EvaluationType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::Playables::____UnityEngine__Playables__FrameData__EvaluationType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::UnityEngine::Playables::____UnityEngine__Playables__FrameData__EvaluationType  ::UnityEngine::Playables::____UnityEngine__Playables__FrameData__EvaluationType::Evaluate{0};
constexpr ::UnityEngine::Playables::____UnityEngine__Playables__FrameData__EvaluationType  ::UnityEngine::Playables::____UnityEngine__Playables__FrameData__EvaluationType::Playback{1};
//  Writing Method size for method: ::UnityEngine::Playables::FrameData.HasFlags
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Playables::FrameData::*)(::UnityEngine::Playables::____UnityEngine__Playables__FrameData__Flags)>(&::UnityEngine::Playables::FrameData::HasFlags)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2b7c268;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::FrameData>::get(),
                            "HasFlags",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::____UnityEngine__Playables__FrameData__Flags>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::FrameData.get_deltaTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::Playables::FrameData::*)()>(&::UnityEngine::Playables::FrameData::get_deltaTime)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2b7c278;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::FrameData>::get(),
                            "get_deltaTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::FrameData.get_effectiveSpeed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::Playables::FrameData::*)()>(&::UnityEngine::Playables::FrameData::get_effectiveSpeed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b7c284;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::FrameData>::get(),
                            "get_effectiveSpeed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::FrameData.get_evaluationType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Playables::____UnityEngine__Playables__FrameData__EvaluationType (::UnityEngine::Playables::FrameData::*)()>(&::UnityEngine::Playables::FrameData::get_evaluationType)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2b7c28c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::FrameData>::get(),
                            "get_evaluationType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::FrameData.get_seekOccurred
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Playables::FrameData::*)()>(&::UnityEngine::Playables::FrameData::get_seekOccurred)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2b7c29c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::FrameData>::get(),
                            "get_seekOccurred",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::FrameData.get_timeLooped
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Playables::FrameData::*)()>(&::UnityEngine::Playables::FrameData::get_timeLooped)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2b7c2a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::FrameData>::get(),
                            "get_timeLooped",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::FrameData.get_timeHeld
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Playables::FrameData::*)()>(&::UnityEngine::Playables::FrameData::get_timeHeld)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2b7c2b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::FrameData>::get(),
                            "get_timeHeld",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::FrameData.get_output
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Playables::PlayableOutput (::UnityEngine::Playables::FrameData::*)()>(&::UnityEngine::Playables::FrameData::get_output)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2b7c2c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::FrameData>::get(),
                            "get_output",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::FrameData.get_effectivePlayState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Playables::PlayState (::UnityEngine::Playables::FrameData::*)()>(&::UnityEngine::Playables::FrameData::get_effectivePlayState)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2b7c2cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::FrameData>::get(),
                            "get_effectivePlayState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "m_FrameID", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_DeltaTime", ty: "double_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Weight", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_EffectiveWeight", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_EffectiveParentDelay", ty: "double_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_EffectiveParentSpeed", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_EffectiveSpeed", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Flags", ty: "::UnityEngine::Playables::____UnityEngine__Playables__FrameData__Flags", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Output", ty: "::UnityEngine::Playables::PlayableOutput", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Playables::FrameData::FrameData(uint64_t m_FrameID, double_t m_DeltaTime, float_t m_Weight, float_t m_EffectiveWeight, double_t m_EffectiveParentDelay, float_t m_EffectiveParentSpeed, float_t m_EffectiveSpeed, ::UnityEngine::Playables::____UnityEngine__Playables__FrameData__Flags m_Flags, ::UnityEngine::Playables::PlayableOutput m_Output) noexcept : ::bs_hook::ValueTypeWrapper() {this->m_FrameID = m_FrameID;
this->m_DeltaTime = m_DeltaTime;
this->m_Weight = m_Weight;
this->m_EffectiveWeight = m_EffectiveWeight;
this->m_EffectiveParentDelay = m_EffectiveParentDelay;
this->m_EffectiveParentSpeed = m_EffectiveParentSpeed;
this->m_EffectiveSpeed = m_EffectiveSpeed;
this->m_Flags = m_Flags;
this->m_Output = m_Output;
}
constexpr void ::UnityEngine::Playables::FrameData::__set_m_FrameID(uint64_t value)  {
::cordl_internals::setInstanceField<uint64_t, 0x0>(this->__instance, std::forward<uint64_t>(value));
}
constexpr uint64_t ::UnityEngine::Playables::FrameData::__get_m_FrameID() const {
return ::cordl_internals::getInstanceField<uint64_t, 0x0>(this->__instance);
}
constexpr void ::UnityEngine::Playables::FrameData::__set_m_DeltaTime(double_t value)  {
::cordl_internals::setInstanceField<double_t, 0x8>(this->__instance, std::forward<double_t>(value));
}
constexpr double_t ::UnityEngine::Playables::FrameData::__get_m_DeltaTime() const {
return ::cordl_internals::getInstanceField<double_t, 0x8>(this->__instance);
}
constexpr void ::UnityEngine::Playables::FrameData::__set_m_Weight(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x10>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t ::UnityEngine::Playables::FrameData::__get_m_Weight() const {
return ::cordl_internals::getInstanceField<float_t, 0x10>(this->__instance);
}
constexpr void ::UnityEngine::Playables::FrameData::__set_m_EffectiveWeight(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x14>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t ::UnityEngine::Playables::FrameData::__get_m_EffectiveWeight() const {
return ::cordl_internals::getInstanceField<float_t, 0x14>(this->__instance);
}
constexpr void ::UnityEngine::Playables::FrameData::__set_m_EffectiveParentDelay(double_t value)  {
::cordl_internals::setInstanceField<double_t, 0x18>(this->__instance, std::forward<double_t>(value));
}
constexpr double_t ::UnityEngine::Playables::FrameData::__get_m_EffectiveParentDelay() const {
return ::cordl_internals::getInstanceField<double_t, 0x18>(this->__instance);
}
constexpr void ::UnityEngine::Playables::FrameData::__set_m_EffectiveParentSpeed(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x20>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t ::UnityEngine::Playables::FrameData::__get_m_EffectiveParentSpeed() const {
return ::cordl_internals::getInstanceField<float_t, 0x20>(this->__instance);
}
constexpr void ::UnityEngine::Playables::FrameData::__set_m_EffectiveSpeed(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x24>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t ::UnityEngine::Playables::FrameData::__get_m_EffectiveSpeed() const {
return ::cordl_internals::getInstanceField<float_t, 0x24>(this->__instance);
}
constexpr void ::UnityEngine::Playables::FrameData::__set_m_Flags(::UnityEngine::Playables::____UnityEngine__Playables__FrameData__Flags value)  {
::cordl_internals::setInstanceField<::UnityEngine::Playables::____UnityEngine__Playables__FrameData__Flags, 0x28>(this->__instance, std::forward<::UnityEngine::Playables::____UnityEngine__Playables__FrameData__Flags>(value));
}
constexpr ::UnityEngine::Playables::____UnityEngine__Playables__FrameData__Flags ::UnityEngine::Playables::FrameData::__get_m_Flags() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Playables::____UnityEngine__Playables__FrameData__Flags, 0x28>(this->__instance);
}
constexpr void ::UnityEngine::Playables::FrameData::__set_m_Output(::UnityEngine::Playables::PlayableOutput value)  {
::cordl_internals::setInstanceField<::UnityEngine::Playables::PlayableOutput, 0x30>(this->__instance, std::forward<::UnityEngine::Playables::PlayableOutput>(value));
}
constexpr ::UnityEngine::Playables::PlayableOutput ::UnityEngine::Playables::FrameData::__get_m_Output() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Playables::PlayableOutput, 0x30>(this->__instance);
}
 bool ::UnityEngine::Playables::FrameData::HasFlags(::UnityEngine::Playables::____UnityEngine__Playables__FrameData__Flags flag)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::FrameData>::get(),
                            "HasFlags",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::____UnityEngine__Playables__FrameData__Flags>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, flag);
}
 float_t ::UnityEngine::Playables::FrameData::get_deltaTime()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::FrameData>::get(),
                            "get_deltaTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 float_t ::UnityEngine::Playables::FrameData::get_effectiveSpeed()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::FrameData>::get(),
                            "get_effectiveSpeed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::UnityEngine::Playables::____UnityEngine__Playables__FrameData__EvaluationType ::UnityEngine::Playables::FrameData::get_evaluationType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::FrameData>::get(),
                            "get_evaluationType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::____UnityEngine__Playables__FrameData__EvaluationType, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 bool ::UnityEngine::Playables::FrameData::get_seekOccurred()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::FrameData>::get(),
                            "get_seekOccurred",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 bool ::UnityEngine::Playables::FrameData::get_timeLooped()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::FrameData>::get(),
                            "get_timeLooped",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 bool ::UnityEngine::Playables::FrameData::get_timeHeld()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::FrameData>::get(),
                            "get_timeHeld",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::UnityEngine::Playables::PlayableOutput ::UnityEngine::Playables::FrameData::get_output()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::FrameData>::get(),
                            "get_output",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::PlayableOutput, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::UnityEngine::Playables::PlayState ::UnityEngine::Playables::FrameData::get_effectivePlayState()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::FrameData>::get(),
                            "get_effectivePlayState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::PlayState, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
} // end anonymous namespace
