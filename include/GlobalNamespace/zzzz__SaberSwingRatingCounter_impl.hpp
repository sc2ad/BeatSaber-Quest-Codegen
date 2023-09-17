#pragma once
namespace {
#include "GlobalNamespace/zzzz__SaberSwingRatingCounter_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "GlobalNamespace/zzzz__ISaberSwingRatingCounter_def.hpp"
#include "GlobalNamespace/zzzz__ISaberMovementDataProcessor_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "GlobalNamespace/zzzz__BladeMovementDataElement_def.hpp"
#include "GlobalNamespace/zzzz__LazyCopyHashSet_1_def.hpp"
#include "GlobalNamespace/zzzz__ISaberSwingRatingCounterDidChangeReceiver_def.hpp"
#include "UnityEngine/zzzz__Plane_def.hpp"
#include "GlobalNamespace/zzzz__ISaberMovementData_def.hpp"
#include "GlobalNamespace/zzzz__ISaberSwingRatingCounterDidFinishReceiver_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SaberSwingRatingCounter.get_beforeCutRating
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::SaberSwingRatingCounter::*)()>(&::GlobalNamespace::SaberSwingRatingCounter::get_beforeCutRating)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21c0f2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberSwingRatingCounter>::get(),
                            "get_beforeCutRating",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaberSwingRatingCounter.get_afterCutRating
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::SaberSwingRatingCounter::*)()>(&::GlobalNamespace::SaberSwingRatingCounter::get_afterCutRating)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21c0f34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberSwingRatingCounter>::get(),
                            "get_afterCutRating",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaberSwingRatingCounter.RegisterDidChangeReceiver
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SaberSwingRatingCounter::*)(::GlobalNamespace::ISaberSwingRatingCounterDidChangeReceiver)>(&::GlobalNamespace::SaberSwingRatingCounter::RegisterDidChangeReceiver)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x21c0f3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberSwingRatingCounter>::get(),
                            "RegisterDidChangeReceiver",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ISaberSwingRatingCounterDidChangeReceiver>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaberSwingRatingCounter.RegisterDidFinishReceiver
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SaberSwingRatingCounter::*)(::GlobalNamespace::ISaberSwingRatingCounterDidFinishReceiver)>(&::GlobalNamespace::SaberSwingRatingCounter::RegisterDidFinishReceiver)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x21c0f94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberSwingRatingCounter>::get(),
                            "RegisterDidFinishReceiver",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ISaberSwingRatingCounterDidFinishReceiver>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaberSwingRatingCounter.UnregisterDidChangeReceiver
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SaberSwingRatingCounter::*)(::GlobalNamespace::ISaberSwingRatingCounterDidChangeReceiver)>(&::GlobalNamespace::SaberSwingRatingCounter::UnregisterDidChangeReceiver)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x21c0fec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberSwingRatingCounter>::get(),
                            "UnregisterDidChangeReceiver",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ISaberSwingRatingCounterDidChangeReceiver>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaberSwingRatingCounter.UnregisterDidFinishReceiver
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SaberSwingRatingCounter::*)(::GlobalNamespace::ISaberSwingRatingCounterDidFinishReceiver)>(&::GlobalNamespace::SaberSwingRatingCounter::UnregisterDidFinishReceiver)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x21c1044;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberSwingRatingCounter>::get(),
                            "UnregisterDidFinishReceiver",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ISaberSwingRatingCounterDidFinishReceiver>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaberSwingRatingCounter.Init
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SaberSwingRatingCounter::*)(::GlobalNamespace::ISaberMovementData, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, bool, bool)>(&::GlobalNamespace::SaberSwingRatingCounter::Init)> {
  constexpr static std::size_t size = 0x364;
  constexpr static std::size_t addrs = 0x21c109c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberSwingRatingCounter>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ISaberMovementData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaberSwingRatingCounter.ProcessNewData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SaberSwingRatingCounter::*)(::GlobalNamespace::BladeMovementDataElement, ::GlobalNamespace::BladeMovementDataElement, bool)>(&::GlobalNamespace::SaberSwingRatingCounter::ProcessNewData)> {
  constexpr static std::size_t size = 0x780;
  constexpr static std::size_t addrs = 0x21c1400;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberSwingRatingCounter>::get(),
                            "ProcessNewData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BladeMovementDataElement>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BladeMovementDataElement>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaberSwingRatingCounter.Finish
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SaberSwingRatingCounter::*)()>(&::GlobalNamespace::SaberSwingRatingCounter::Finish)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x21c1b80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberSwingRatingCounter>::get(),
                            "Finish",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaberSwingRatingCounter.DrawGizmos
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SaberSwingRatingCounter::*)()>(&::GlobalNamespace::SaberSwingRatingCounter::DrawGizmos)> {
  constexpr static std::size_t size = 0x384;
  constexpr static std::size_t addrs = 0x21c1d2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberSwingRatingCounter>::get(),
                            "DrawGizmos",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaberSwingRatingCounter._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SaberSwingRatingCounter::*)()>(&::GlobalNamespace::SaberSwingRatingCounter::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x21c20b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberSwingRatingCounter>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::GlobalNamespace::ISaberSwingRatingCounter
constexpr  ::GlobalNamespace::SaberSwingRatingCounter::operator ::GlobalNamespace::ISaberSwingRatingCounter() const noexcept {
return ::GlobalNamespace::ISaberSwingRatingCounter(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to ::GlobalNamespace::ISaberMovementDataProcessor
constexpr  ::GlobalNamespace::SaberSwingRatingCounter::operator ::GlobalNamespace::ISaberMovementDataProcessor() const noexcept {
return ::GlobalNamespace::ISaberMovementDataProcessor(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::SaberSwingRatingCounter::__set__saberMovementData(::GlobalNamespace::ISaberMovementData value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::ISaberMovementData, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::ISaberMovementData>(value));
}
constexpr ::GlobalNamespace::ISaberMovementData ::GlobalNamespace::SaberSwingRatingCounter::__get__saberMovementData() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::ISaberMovementData, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::SaberSwingRatingCounter::__set__cutPlaneNormal(::UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3 ::GlobalNamespace::SaberSwingRatingCounter::__get__cutPlaneNormal() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::SaberSwingRatingCounter::__set__cutTime(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x24>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::SaberSwingRatingCounter::__get__cutTime() const {
return ::cordl_internals::getInstanceField<float_t, 0x24>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::SaberSwingRatingCounter::__set__afterCutRating(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::SaberSwingRatingCounter::__get__afterCutRating() const {
return ::cordl_internals::getInstanceField<float_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::SaberSwingRatingCounter::__set__beforeCutRating(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::SaberSwingRatingCounter::__get__beforeCutRating() const {
return ::cordl_internals::getInstanceField<float_t, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::SaberSwingRatingCounter::__set__notePlane(::UnityEngine::Plane value)  {
::cordl_internals::setInstanceField<::UnityEngine::Plane, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Plane>(value));
}
constexpr ::UnityEngine::Plane ::GlobalNamespace::SaberSwingRatingCounter::__get__notePlane() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Plane, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::SaberSwingRatingCounter::__set__notePlaneWasCut(bool value)  {
::cordl_internals::setInstanceField<bool, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::GlobalNamespace::SaberSwingRatingCounter::__get__notePlaneWasCut() const {
return ::cordl_internals::getInstanceField<bool, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::SaberSwingRatingCounter::__set__noteForward(::UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x44>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3 ::GlobalNamespace::SaberSwingRatingCounter::__get__noteForward() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x44>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::SaberSwingRatingCounter::__set__rateBeforeCut(bool value)  {
::cordl_internals::setInstanceField<bool, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::GlobalNamespace::SaberSwingRatingCounter::__get__rateBeforeCut() const {
return ::cordl_internals::getInstanceField<bool, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::SaberSwingRatingCounter::__set__rateAfterCut(bool value)  {
::cordl_internals::setInstanceField<bool, 0x51>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::GlobalNamespace::SaberSwingRatingCounter::__get__rateAfterCut() const {
return ::cordl_internals::getInstanceField<bool, 0x51>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::SaberSwingRatingCounter::__set__didChangeReceivers(::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::ISaberSwingRatingCounterDidChangeReceiver> value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::ISaberSwingRatingCounterDidChangeReceiver>, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::ISaberSwingRatingCounterDidChangeReceiver>>(value));
}
constexpr ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::ISaberSwingRatingCounterDidChangeReceiver> ::GlobalNamespace::SaberSwingRatingCounter::__get__didChangeReceivers() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::ISaberSwingRatingCounterDidChangeReceiver>, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::SaberSwingRatingCounter::__set__didFinishReceivers(::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::ISaberSwingRatingCounterDidFinishReceiver> value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::ISaberSwingRatingCounterDidFinishReceiver>, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::ISaberSwingRatingCounterDidFinishReceiver>>(value));
}
constexpr ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::ISaberSwingRatingCounterDidFinishReceiver> ::GlobalNamespace::SaberSwingRatingCounter::__get__didFinishReceivers() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::ISaberSwingRatingCounterDidFinishReceiver>, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::SaberSwingRatingCounter::__set__notePlaneCenter(::UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x68>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3 ::GlobalNamespace::SaberSwingRatingCounter::__get__notePlaneCenter() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x68>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::SaberSwingRatingCounter::__set__beforeCutTopPos(::UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x74>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3 ::GlobalNamespace::SaberSwingRatingCounter::__get__beforeCutTopPos() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x74>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::SaberSwingRatingCounter::__set__beforeCutBottomPos(::UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x80>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3 ::GlobalNamespace::SaberSwingRatingCounter::__get__beforeCutBottomPos() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x80>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::SaberSwingRatingCounter::__set__afterCutTopPos(::UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x8c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3 ::GlobalNamespace::SaberSwingRatingCounter::__get__afterCutTopPos() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x8c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::SaberSwingRatingCounter::__set__afterCutBottomPos(::UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0x98>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3 ::GlobalNamespace::SaberSwingRatingCounter::__get__afterCutBottomPos() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0x98>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::SaberSwingRatingCounter::__set__newPlaneNormal(::UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0xa4>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3 ::GlobalNamespace::SaberSwingRatingCounter::__get__newPlaneNormal() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0xa4>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::SaberSwingRatingCounter::__set__cutTopPos(::UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0xb0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3 ::GlobalNamespace::SaberSwingRatingCounter::__get__cutTopPos() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0xb0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::SaberSwingRatingCounter::__set__cutBottomPos(::UnityEngine::Vector3 value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector3, 0xbc>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Vector3>(value));
}
constexpr ::UnityEngine::Vector3 ::GlobalNamespace::SaberSwingRatingCounter::__get__cutBottomPos() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector3, 0xbc>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::SaberSwingRatingCounter::__set__finished(bool value)  {
::cordl_internals::setInstanceField<bool, 0xc8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::GlobalNamespace::SaberSwingRatingCounter::__get__finished() const {
return ::cordl_internals::getInstanceField<bool, 0xc8>(this->::bs_hook::Il2CppWrapperType::instance);
}
 float_t ::GlobalNamespace::SaberSwingRatingCounter::get_beforeCutRating()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberSwingRatingCounter>::get(),
                            "get_beforeCutRating",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 float_t ::GlobalNamespace::SaberSwingRatingCounter::get_afterCutRating()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberSwingRatingCounter>::get(),
                            "get_afterCutRating",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::SaberSwingRatingCounter::RegisterDidChangeReceiver(::GlobalNamespace::ISaberSwingRatingCounterDidChangeReceiver receiver)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberSwingRatingCounter>::get(),
                            "RegisterDidChangeReceiver",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ISaberSwingRatingCounterDidChangeReceiver>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, receiver);
}
 void ::GlobalNamespace::SaberSwingRatingCounter::RegisterDidFinishReceiver(::GlobalNamespace::ISaberSwingRatingCounterDidFinishReceiver receiver)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberSwingRatingCounter>::get(),
                            "RegisterDidFinishReceiver",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ISaberSwingRatingCounterDidFinishReceiver>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, receiver);
}
 void ::GlobalNamespace::SaberSwingRatingCounter::UnregisterDidChangeReceiver(::GlobalNamespace::ISaberSwingRatingCounterDidChangeReceiver receiver)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberSwingRatingCounter>::get(),
                            "UnregisterDidChangeReceiver",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ISaberSwingRatingCounterDidChangeReceiver>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, receiver);
}
 void ::GlobalNamespace::SaberSwingRatingCounter::UnregisterDidFinishReceiver(::GlobalNamespace::ISaberSwingRatingCounterDidFinishReceiver receiver)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberSwingRatingCounter>::get(),
                            "UnregisterDidFinishReceiver",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ISaberSwingRatingCounterDidFinishReceiver>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, receiver);
}
 void ::GlobalNamespace::SaberSwingRatingCounter::Init(::GlobalNamespace::ISaberMovementData saberMovementData, ::UnityEngine::Vector3 notePosition, ::UnityEngine::Quaternion noteRotation, bool rateBeforeCut, bool rateAfterCut)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberSwingRatingCounter>::get(),
                            "Init",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ISaberMovementData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, saberMovementData, notePosition, noteRotation, rateBeforeCut, rateAfterCut);
}
 void ::GlobalNamespace::SaberSwingRatingCounter::ProcessNewData(::GlobalNamespace::BladeMovementDataElement newData, ::GlobalNamespace::BladeMovementDataElement prevData, bool prevDataAreValid)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberSwingRatingCounter>::get(),
                            "ProcessNewData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BladeMovementDataElement>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BladeMovementDataElement>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, newData, prevData, prevDataAreValid);
}
 void ::GlobalNamespace::SaberSwingRatingCounter::Finish()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberSwingRatingCounter>::get(),
                            "Finish",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::SaberSwingRatingCounter::DrawGizmos()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberSwingRatingCounter>::get(),
                            "DrawGizmos",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 ::GlobalNamespace::SaberSwingRatingCounter::SaberSwingRatingCounter()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<SaberSwingRatingCounter>())) {}
 void ::GlobalNamespace::SaberSwingRatingCounter::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SaberSwingRatingCounter>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
