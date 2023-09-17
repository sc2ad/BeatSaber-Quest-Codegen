#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__NoteCutInfo_def.hpp"
#include "GlobalNamespace/zzzz__SaberType_def.hpp"
#include "GlobalNamespace/zzzz__ISaberMovementData_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "GlobalNamespace/zzzz__NoteData_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::____GlobalNamespace__NoteCutInfo__FailReason::____GlobalNamespace__NoteCutInfo__FailReason(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::GlobalNamespace::____GlobalNamespace__NoteCutInfo__FailReason::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::____GlobalNamespace__NoteCutInfo__FailReason::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::GlobalNamespace::____GlobalNamespace__NoteCutInfo__FailReason  ::GlobalNamespace::____GlobalNamespace__NoteCutInfo__FailReason::None{0};
constexpr ::GlobalNamespace::____GlobalNamespace__NoteCutInfo__FailReason  ::GlobalNamespace::____GlobalNamespace__NoteCutInfo__FailReason::TooSoon{1};
constexpr ::GlobalNamespace::____GlobalNamespace__NoteCutInfo__FailReason  ::GlobalNamespace::____GlobalNamespace__NoteCutInfo__FailReason::WrongColor{2};
constexpr ::GlobalNamespace::____GlobalNamespace__NoteCutInfo__FailReason  ::GlobalNamespace::____GlobalNamespace__NoteCutInfo__FailReason::CutHarder{3};
constexpr ::GlobalNamespace::____GlobalNamespace__NoteCutInfo__FailReason  ::GlobalNamespace::____GlobalNamespace__NoteCutInfo__FailReason::WrongDirection{4};
//  Writing Method size for method: ::GlobalNamespace::NoteCutInfo.get_allIsOK
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::NoteCutInfo::*)()>(&::GlobalNamespace::NoteCutInfo::get_allIsOK)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1216f58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteCutInfo>::get(),
                            "get_allIsOK",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteCutInfo.get_allExceptSaberTypeIsOK
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::NoteCutInfo::*)()>(&::GlobalNamespace::NoteCutInfo::get_allExceptSaberTypeIsOK)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x1216f88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteCutInfo>::get(),
                            "get_allExceptSaberTypeIsOK",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteCutInfo.get_failReason
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::____GlobalNamespace__NoteCutInfo__FailReason (::GlobalNamespace::NoteCutInfo::*)()>(&::GlobalNamespace::NoteCutInfo::get_failReason)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x1216fb0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteCutInfo>::get(),
                            "get_failReason",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteCutInfo._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NoteCutInfo::*)(::GlobalNamespace::NoteData, bool, bool, bool, bool, float_t, ::UnityEngine::Vector3, ::GlobalNamespace::SaberType, float_t, float_t, ::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t, float_t, ::UnityEngine::Quaternion, ::UnityEngine::Quaternion, ::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::GlobalNamespace::ISaberMovementData)>(&::GlobalNamespace::NoteCutInfo::_ctor)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x1216ff4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteCutInfo>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SaberType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ISaberMovementData>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "noteData", ty: "::GlobalNamespace::NoteData", modifiers: "", def_value: Some("csnull") }, CppParam { name: "speedOK", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "directionOK", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "saberTypeOK", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "wasCutTooSoon", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "saberSpeed", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "saberDir", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "saberType", ty: "::GlobalNamespace::SaberType", modifiers: "", def_value: Some("{}") }, CppParam { name: "timeDeviation", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "cutDirDeviation", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "cutPoint", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "cutNormal", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "cutAngle", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "cutDistanceToCenter", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "worldRotation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: Some("{}") }, CppParam { name: "inverseWorldRotation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: Some("{}") }, CppParam { name: "noteRotation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: Some("{}") }, CppParam { name: "notePosition", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "saberMovementData", ty: "::GlobalNamespace::ISaberMovementData", modifiers: "", def_value: Some("csnull") }]
constexpr ::GlobalNamespace::NoteCutInfo::NoteCutInfo(::GlobalNamespace::NoteData noteData, bool speedOK, bool directionOK, bool saberTypeOK, bool wasCutTooSoon, float_t saberSpeed, ::UnityEngine::Vector3 saberDir, ::GlobalNamespace::SaberType saberType, float_t timeDeviation, float_t cutDirDeviation, ::UnityEngine::Vector3 cutPoint, ::UnityEngine::Vector3 cutNormal, float_t cutAngle, float_t cutDistanceToCenter, ::UnityEngine::Quaternion worldRotation, ::UnityEngine::Quaternion inverseWorldRotation, ::UnityEngine::Quaternion noteRotation, ::UnityEngine::Vector3 notePosition, ::GlobalNamespace::ISaberMovementData saberMovementData) noexcept : ::bs_hook::ValueTypeWrapper() {this->noteData = noteData;
this->speedOK = speedOK;
this->directionOK = directionOK;
this->saberTypeOK = saberTypeOK;
this->wasCutTooSoon = wasCutTooSoon;
this->saberSpeed = saberSpeed;
this->saberDir = saberDir;
this->saberType = saberType;
this->timeDeviation = timeDeviation;
this->cutDirDeviation = cutDirDeviation;
this->cutPoint = cutPoint;
this->cutNormal = cutNormal;
this->cutAngle = cutAngle;
this->cutDistanceToCenter = cutDistanceToCenter;
this->worldRotation = worldRotation;
this->inverseWorldRotation = inverseWorldRotation;
this->noteRotation = noteRotation;
this->notePosition = notePosition;
this->saberMovementData = saberMovementData;
}
constexpr void ::GlobalNamespace::NoteCutInfo::__set_noteData(::GlobalNamespace::NoteData value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::NoteData, 0x0>(this->__instance, std::forward<::GlobalNamespace::NoteData>(value));
}
constexpr ::GlobalNamespace::NoteData ::GlobalNamespace::NoteCutInfo::__get_noteData() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::NoteData, 0x0>(this->__instance);
}
constexpr void ::GlobalNamespace::NoteCutInfo::__set_speedOK(bool value)  {
::cordl_internals::setInstanceField<bool, 0x8>(this->__instance, std::forward<bool>(value));
}
constexpr bool ::GlobalNamespace::NoteCutInfo::__get_speedOK() const {
return ::cordl_internals::getInstanceField<bool, 0x8>(this->__instance);
}
constexpr void ::GlobalNamespace::NoteCutInfo::__set_directionOK(bool value)  {
::cordl_internals::setInstanceField<bool, 0x9>(this->__instance, std::forward<bool>(value));
}
constexpr bool ::GlobalNamespace::NoteCutInfo::__get_directionOK() const {
return ::cordl_internals::getInstanceField<bool, 0x9>(this->__instance);
}
constexpr void ::GlobalNamespace::NoteCutInfo::__set_saberTypeOK(bool value)  {
::cordl_internals::setInstanceField<bool, 0xa>(this->__instance, std::forward<bool>(value));
}
constexpr bool ::GlobalNamespace::NoteCutInfo::__get_saberTypeOK() const {
return ::cordl_internals::getInstanceField<bool, 0xa>(this->__instance);
}
constexpr void ::GlobalNamespace::NoteCutInfo::__set_wasCutTooSoon(bool value)  {
::cordl_internals::setInstanceField<bool, 0xb>(this->__instance, std::forward<bool>(value));
}
constexpr bool ::GlobalNamespace::NoteCutInfo::__get_wasCutTooSoon() const {
return ::cordl_internals::getInstanceField<bool, 0xb>(this->__instance);
}
constexpr void ::GlobalNamespace::NoteCutInfo::__set_saberSpeed(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0xc>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::NoteCutInfo::__get_saberSpeed() const {
return ::cordl_internals::getInstanceField<float_t, 0xc>(this->__instance);
}
constexpr void ::GlobalNamespace::NoteCutInfo::__set_saberDir(::UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x10>(this->__instance, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3 ::GlobalNamespace::NoteCutInfo::__get_saberDir() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x10>(this->__instance);
}
constexpr void ::GlobalNamespace::NoteCutInfo::__set_saberType(::GlobalNamespace::SaberType value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::SaberType, 0x1c>(this->__instance, std::forward<::GlobalNamespace::SaberType>(value));
}
constexpr ::GlobalNamespace::SaberType ::GlobalNamespace::NoteCutInfo::__get_saberType() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::SaberType, 0x1c>(this->__instance);
}
constexpr void ::GlobalNamespace::NoteCutInfo::__set_timeDeviation(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x20>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::NoteCutInfo::__get_timeDeviation() const {
return ::cordl_internals::getInstanceField<float_t, 0x20>(this->__instance);
}
constexpr void ::GlobalNamespace::NoteCutInfo::__set_cutDirDeviation(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x24>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::NoteCutInfo::__get_cutDirDeviation() const {
return ::cordl_internals::getInstanceField<float_t, 0x24>(this->__instance);
}
constexpr void ::GlobalNamespace::NoteCutInfo::__set_cutPoint(::UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x28>(this->__instance, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3 ::GlobalNamespace::NoteCutInfo::__get_cutPoint() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x28>(this->__instance);
}
constexpr void ::GlobalNamespace::NoteCutInfo::__set_cutNormal(::UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x34>(this->__instance, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3 ::GlobalNamespace::NoteCutInfo::__get_cutNormal() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x34>(this->__instance);
}
constexpr void ::GlobalNamespace::NoteCutInfo::__set_cutAngle(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x40>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::NoteCutInfo::__get_cutAngle() const {
return ::cordl_internals::getInstanceField<float_t, 0x40>(this->__instance);
}
constexpr void ::GlobalNamespace::NoteCutInfo::__set_cutDistanceToCenter(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x44>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::NoteCutInfo::__get_cutDistanceToCenter() const {
return ::cordl_internals::getInstanceField<float_t, 0x44>(this->__instance);
}
constexpr void ::GlobalNamespace::NoteCutInfo::__set_worldRotation(::UnityEngine::Quaternion value)  {
::cordl_internals::setInstanceField<::UnityEngine::Quaternion, 0x48>(this->__instance, std::forward<::UnityEngine::Quaternion>(value));
}
constexpr ::UnityEngine::Quaternion ::GlobalNamespace::NoteCutInfo::__get_worldRotation() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Quaternion, 0x48>(this->__instance);
}
constexpr void ::GlobalNamespace::NoteCutInfo::__set_inverseWorldRotation(::UnityEngine::Quaternion value)  {
::cordl_internals::setInstanceField<::UnityEngine::Quaternion, 0x58>(this->__instance, std::forward<::UnityEngine::Quaternion>(value));
}
constexpr ::UnityEngine::Quaternion ::GlobalNamespace::NoteCutInfo::__get_inverseWorldRotation() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Quaternion, 0x58>(this->__instance);
}
constexpr void ::GlobalNamespace::NoteCutInfo::__set_noteRotation(::UnityEngine::Quaternion value)  {
::cordl_internals::setInstanceField<::UnityEngine::Quaternion, 0x68>(this->__instance, std::forward<::UnityEngine::Quaternion>(value));
}
constexpr ::UnityEngine::Quaternion ::GlobalNamespace::NoteCutInfo::__get_noteRotation() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Quaternion, 0x68>(this->__instance);
}
constexpr void ::GlobalNamespace::NoteCutInfo::__set_notePosition(::UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x78>(this->__instance, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3 ::GlobalNamespace::NoteCutInfo::__get_notePosition() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x78>(this->__instance);
}
constexpr void ::GlobalNamespace::NoteCutInfo::__set_saberMovementData(::GlobalNamespace::ISaberMovementData value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::ISaberMovementData, 0x88>(this->__instance, std::forward<::GlobalNamespace::ISaberMovementData>(value));
}
constexpr ::GlobalNamespace::ISaberMovementData ::GlobalNamespace::NoteCutInfo::__get_saberMovementData() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::ISaberMovementData, 0x88>(this->__instance);
}
 bool ::GlobalNamespace::NoteCutInfo::get_allIsOK()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteCutInfo>::get(),
                            "get_allIsOK",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 bool ::GlobalNamespace::NoteCutInfo::get_allExceptSaberTypeIsOK()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteCutInfo>::get(),
                            "get_allExceptSaberTypeIsOK",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::GlobalNamespace::____GlobalNamespace__NoteCutInfo__FailReason ::GlobalNamespace::NoteCutInfo::get_failReason()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteCutInfo>::get(),
                            "get_failReason",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::____GlobalNamespace__NoteCutInfo__FailReason, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void ::GlobalNamespace::NoteCutInfo::_ctor(::GlobalNamespace::NoteData noteData, bool speedOK, bool directionOK, bool saberTypeOK, bool wasCutTooSoon, float_t saberSpeed, ::UnityEngine::Vector3 saberDir, ::GlobalNamespace::SaberType saberType, float_t timeDeviation, float_t cutDirDeviation, ::UnityEngine::Vector3 cutPoint, ::UnityEngine::Vector3 cutNormal, float_t cutDistanceToCenter, float_t cutAngle, ::UnityEngine::Quaternion worldRotation, ::UnityEngine::Quaternion inverseWorldRotation, ::UnityEngine::Quaternion noteRotation, ::UnityEngine::Vector3 notePosition, ::GlobalNamespace::ISaberMovementData saberMovementData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteCutInfo>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SaberType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ISaberMovementData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, noteData, speedOK, directionOK, saberTypeOK, wasCutTooSoon, saberSpeed, saberDir, saberType, timeDeviation, cutDirDeviation, cutPoint, cutNormal, cutDistanceToCenter, cutAngle, worldRotation, inverseWorldRotation, noteRotation, notePosition, saberMovementData);
}
} // end anonymous namespace
