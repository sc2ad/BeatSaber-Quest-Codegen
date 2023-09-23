#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/Timeline/zzzz__TimelineClip_def.hpp"
#include "UnityEngine/zzzz__ISerializationCallbackReceiver_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__AnimationClip_def.hpp"
#include "UnityEngine/Timeline/zzzz__ICurvesOwner_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
#include "UnityEngine/Timeline/zzzz__ClipCaps_def.hpp"
#include "UnityEngine/Timeline/zzzz__TrackAsset_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::Timeline::UnityEngine__Timeline__TimelineClip__Versions::UnityEngine__Timeline__TimelineClip__Versions(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void UnityEngine::Timeline::UnityEngine__Timeline__TimelineClip__Versions::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::Timeline::UnityEngine__Timeline__TimelineClip__Versions::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr UnityEngine::Timeline::UnityEngine__Timeline__TimelineClip__Versions  UnityEngine::Timeline::UnityEngine__Timeline__TimelineClip__Versions::Initial{0};
constexpr UnityEngine::Timeline::UnityEngine__Timeline__TimelineClip__Versions  UnityEngine::Timeline::UnityEngine__Timeline__TimelineClip__Versions::ClipInFromGlobalToLocal{1};
//  Writing Method size for method: UnityEngine::Timeline::UnityEngine__Timeline__TimelineClip__TimelineClipUpgrade.UpgradeClipInFromGlobalToLocal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::Timeline::TimelineClip)>(&UnityEngine::Timeline::UnityEngine__Timeline__TimelineClip__TimelineClipUpgrade::UpgradeClipInFromGlobalToLocal)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2abc94c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::UnityEngine__Timeline__TimelineClip__TimelineClipUpgrade>::get(),
                            "UpgradeClipInFromGlobalToLocal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Timeline::TimelineClip>::get()}
                        )));
    return ___internal_method;
  }
};
 void UnityEngine::Timeline::UnityEngine__Timeline__TimelineClip__TimelineClipUpgrade::UpgradeClipInFromGlobalToLocal(UnityEngine::Timeline::TimelineClip clip)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::UnityEngine__Timeline__TimelineClip__TimelineClipUpgrade>::get(),
                            "UpgradeClipInFromGlobalToLocal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Timeline::TimelineClip>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, clip);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::Timeline::UnityEngine__Timeline__TimelineClip__ClipExtrapolation::UnityEngine__Timeline__TimelineClip__ClipExtrapolation(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void UnityEngine::Timeline::UnityEngine__Timeline__TimelineClip__ClipExtrapolation::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::Timeline::UnityEngine__Timeline__TimelineClip__ClipExtrapolation::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr UnityEngine::Timeline::UnityEngine__Timeline__TimelineClip__ClipExtrapolation  UnityEngine::Timeline::UnityEngine__Timeline__TimelineClip__ClipExtrapolation::None{0};
constexpr UnityEngine::Timeline::UnityEngine__Timeline__TimelineClip__ClipExtrapolation  UnityEngine::Timeline::UnityEngine__Timeline__TimelineClip__ClipExtrapolation::Hold{1};
constexpr UnityEngine::Timeline::UnityEngine__Timeline__TimelineClip__ClipExtrapolation  UnityEngine::Timeline::UnityEngine__Timeline__TimelineClip__ClipExtrapolation::Loop{2};
constexpr UnityEngine::Timeline::UnityEngine__Timeline__TimelineClip__ClipExtrapolation  UnityEngine::Timeline::UnityEngine__Timeline__TimelineClip__ClipExtrapolation::PingPong{3};
constexpr UnityEngine::Timeline::UnityEngine__Timeline__TimelineClip__ClipExtrapolation  UnityEngine::Timeline::UnityEngine__Timeline__TimelineClip__ClipExtrapolation::Continue{4};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::Timeline::UnityEngine__Timeline__TimelineClip__BlendCurveMode::UnityEngine__Timeline__TimelineClip__BlendCurveMode(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void UnityEngine::Timeline::UnityEngine__Timeline__TimelineClip__BlendCurveMode::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::Timeline::UnityEngine__Timeline__TimelineClip__BlendCurveMode::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr UnityEngine::Timeline::UnityEngine__Timeline__TimelineClip__BlendCurveMode  UnityEngine::Timeline::UnityEngine__Timeline__TimelineClip__BlendCurveMode::Auto{0};
constexpr UnityEngine::Timeline::UnityEngine__Timeline__TimelineClip__BlendCurveMode  UnityEngine::Timeline::UnityEngine__Timeline__TimelineClip__BlendCurveMode::Manual{1};
//  Writing Method size for method: UnityEngine::Timeline::TimelineClip.UpgradeToLatestVersion
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::TimelineClip::*)()>(&UnityEngine::Timeline::TimelineClip::UpgradeToLatestVersion)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x2abc914;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineClip>::get(),
                            "UpgradeToLatestVersion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Timeline::TimelineClip._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::TimelineClip::*)(UnityEngine::Timeline::TrackAsset)>(&UnityEngine::Timeline::TimelineClip::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2abc988;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineClip>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Timeline::TrackAsset>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Timeline::TimelineClip.get_hasPreExtrapolation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Timeline::TimelineClip::*)()>(&UnityEngine::Timeline::TimelineClip::get_hasPreExtrapolation)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2abcab8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineClip>::get(),
                            "get_hasPreExtrapolation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Timeline::TimelineClip.get_hasPostExtrapolation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Timeline::TimelineClip::*)()>(&UnityEngine::Timeline::TimelineClip::get_hasPostExtrapolation)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2abcad8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineClip>::get(),
                            "get_hasPostExtrapolation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Timeline::TimelineClip.get_timeScale
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (UnityEngine::Timeline::TimelineClip::*)()>(&UnityEngine::Timeline::TimelineClip::get_timeScale)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x2abcaf8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineClip>::get(),
                            "get_timeScale",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Timeline::TimelineClip.set_timeScale
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::TimelineClip::*)(double_t)>(&UnityEngine::Timeline::TimelineClip::set_timeScale)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x2abccc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineClip>::get(),
                            "set_timeScale",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Timeline::TimelineClip.get_start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (UnityEngine::Timeline::TimelineClip::*)()>(&UnityEngine::Timeline::TimelineClip::get_start)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2abcda0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineClip>::get(),
                            "get_start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Timeline::TimelineClip.set_start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::TimelineClip::*)(double_t)>(&UnityEngine::Timeline::TimelineClip::set_start)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x2ab8e74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineClip>::get(),
                            "set_start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Timeline::TimelineClip.get_duration
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (UnityEngine::Timeline::TimelineClip::*)()>(&UnityEngine::Timeline::TimelineClip::get_duration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2abcf48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineClip>::get(),
                            "get_duration",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Timeline::TimelineClip.set_duration
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::TimelineClip::*)(double_t)>(&UnityEngine::Timeline::TimelineClip::set_duration)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x2ab8f78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineClip>::get(),
                            "set_duration",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Timeline::TimelineClip.get_end
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (UnityEngine::Timeline::TimelineClip::*)()>(&UnityEngine::Timeline::TimelineClip::get_end)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2abcf50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineClip>::get(),
                            "get_end",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Timeline::TimelineClip.get_clipIn
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (UnityEngine::Timeline::TimelineClip::*)()>(&UnityEngine::Timeline::TimelineClip::get_clipIn)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2abcf60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineClip>::get(),
                            "get_clipIn",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Timeline::TimelineClip.set_clipIn
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::TimelineClip::*)(double_t)>(&UnityEngine::Timeline::TimelineClip::set_clipIn)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x2abcf80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineClip>::get(),
                            "set_clipIn",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Timeline::TimelineClip.get_displayName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::Timeline::TimelineClip::*)()>(&UnityEngine::Timeline::TimelineClip::get_displayName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2abd058;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineClip>::get(),
                            "get_displayName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Timeline::TimelineClip.set_displayName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::TimelineClip::*)(::StringW)>(&UnityEngine::Timeline::TimelineClip::set_displayName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2abd060;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineClip>::get(),
                            "set_displayName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Timeline::TimelineClip.get_clipAssetDuration
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (UnityEngine::Timeline::TimelineClip::*)()>(&UnityEngine::Timeline::TimelineClip::get_clipAssetDuration)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x2abd068;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineClip>::get(),
                            "get_clipAssetDuration",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Timeline::TimelineClip.get_curves
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::AnimationClip (UnityEngine::Timeline::TimelineClip::*)()>(&UnityEngine::Timeline::TimelineClip::get_curves)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2abd128;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineClip>::get(),
                            "get_curves",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Timeline::TimelineClip.set_curves
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::TimelineClip::*)(UnityEngine::AnimationClip)>(&UnityEngine::Timeline::TimelineClip::set_curves)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2abd130;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineClip>::get(),
                            "set_curves",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::AnimationClip>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Timeline::TimelineClip.UnityEngine_Timeline_ICurvesOwner_get_defaultCurvesName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::Timeline::TimelineClip::*)()>(&UnityEngine::Timeline::TimelineClip::UnityEngine_Timeline_ICurvesOwner_get_defaultCurvesName)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2abd138;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineClip>::get(),
                            "UnityEngine.Timeline.ICurvesOwner.get_defaultCurvesName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Timeline::TimelineClip.get_hasCurves
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Timeline::TimelineClip::*)()>(&UnityEngine::Timeline::TimelineClip::get_hasCurves)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2abd190;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineClip>::get(),
                            "get_hasCurves",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Timeline::TimelineClip.get_asset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Object (UnityEngine::Timeline::TimelineClip::*)()>(&UnityEngine::Timeline::TimelineClip::get_asset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2abd21c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineClip>::get(),
                            "get_asset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Timeline::TimelineClip.set_asset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::TimelineClip::*)(UnityEngine::Object)>(&UnityEngine::Timeline::TimelineClip::set_asset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2abd224;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineClip>::get(),
                            "set_asset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Object>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Timeline::TimelineClip.UnityEngine_Timeline_ICurvesOwner_get_assetOwner
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Object (UnityEngine::Timeline::TimelineClip::*)()>(&UnityEngine::Timeline::TimelineClip::UnityEngine_Timeline_ICurvesOwner_get_assetOwner)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2abd22c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineClip>::get(),
                            "UnityEngine.Timeline.ICurvesOwner.get_assetOwner",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Timeline::TimelineClip.UnityEngine_Timeline_ICurvesOwner_get_targetTrack
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Timeline::TrackAsset (UnityEngine::Timeline::TimelineClip::*)()>(&UnityEngine::Timeline::TimelineClip::UnityEngine_Timeline_ICurvesOwner_get_targetTrack)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2abd234;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineClip>::get(),
                            "UnityEngine.Timeline.ICurvesOwner.get_targetTrack",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Timeline::TimelineClip.get_underlyingAsset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Object (UnityEngine::Timeline::TimelineClip::*)()>(&UnityEngine::Timeline::TimelineClip::get_underlyingAsset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2abd23c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineClip>::get(),
                            "get_underlyingAsset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Timeline::TimelineClip.set_underlyingAsset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::TimelineClip::*)(UnityEngine::Object)>(&UnityEngine::Timeline::TimelineClip::set_underlyingAsset)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2abd244;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineClip>::get(),
                            "set_underlyingAsset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Object>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Timeline::TimelineClip.get_parentTrack
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Timeline::TrackAsset (UnityEngine::Timeline::TimelineClip::*)()>(&UnityEngine::Timeline::TimelineClip::get_parentTrack)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2abd248;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineClip>::get(),
                            "get_parentTrack",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Timeline::TimelineClip.set_parentTrack
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::TimelineClip::*)(UnityEngine::Timeline::TrackAsset)>(&UnityEngine::Timeline::TimelineClip::set_parentTrack)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2abd250;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineClip>::get(),
                            "set_parentTrack",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Timeline::TrackAsset>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Timeline::TimelineClip.GetParentTrack
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Timeline::TrackAsset (UnityEngine::Timeline::TimelineClip::*)()>(&UnityEngine::Timeline::TimelineClip::GetParentTrack)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2abd254;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineClip>::get(),
                            "GetParentTrack",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Timeline::TimelineClip.SetParentTrack_Internal
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::TimelineClip::*)(UnityEngine::Timeline::TrackAsset)>(&UnityEngine::Timeline::TimelineClip::SetParentTrack_Internal)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x2abc9c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineClip>::get(),
                            "SetParentTrack_Internal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Timeline::TrackAsset>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Timeline::TimelineClip.get_easeInDuration
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (UnityEngine::Timeline::TimelineClip::*)()>(&UnityEngine::Timeline::TimelineClip::get_easeInDuration)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x2abd390;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineClip>::get(),
                            "get_easeInDuration",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Timeline::TimelineClip.set_easeInDuration
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::TimelineClip::*)(double_t)>(&UnityEngine::Timeline::TimelineClip::set_easeInDuration)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x2abd478;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineClip>::get(),
                            "set_easeInDuration",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Timeline::TimelineClip.get_easeOutDuration
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (UnityEngine::Timeline::TimelineClip::*)()>(&UnityEngine::Timeline::TimelineClip::get_easeOutDuration)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x2abd570;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineClip>::get(),
                            "get_easeOutDuration",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Timeline::TimelineClip.set_easeOutDuration
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::TimelineClip::*)(double_t)>(&UnityEngine::Timeline::TimelineClip::set_easeOutDuration)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x2abd658;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineClip>::get(),
                            "set_easeOutDuration",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Timeline::TimelineClip.get_eastOutTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (UnityEngine::Timeline::TimelineClip::*)()>(&UnityEngine::Timeline::TimelineClip::get_eastOutTime)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2abd750;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineClip>::get(),
                            "get_eastOutTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Timeline::TimelineClip.get_easeOutTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (UnityEngine::Timeline::TimelineClip::*)()>(&UnityEngine::Timeline::TimelineClip::get_easeOutTime)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2abd77c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineClip>::get(),
                            "get_easeOutTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Timeline::TimelineClip.get_blendInDuration
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (UnityEngine::Timeline::TimelineClip::*)()>(&UnityEngine::Timeline::TimelineClip::get_blendInDuration)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2abd7a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineClip>::get(),
                            "get_blendInDuration",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Timeline::TimelineClip.set_blendInDuration
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::TimelineClip::*)(double_t)>(&UnityEngine::Timeline::TimelineClip::set_blendInDuration)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2abd7c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineClip>::get(),
                            "set_blendInDuration",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Timeline::TimelineClip.get_blendOutDuration
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (UnityEngine::Timeline::TimelineClip::*)()>(&UnityEngine::Timeline::TimelineClip::get_blendOutDuration)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2abd850;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineClip>::get(),
                            "get_blendOutDuration",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Timeline::TimelineClip.set_blendOutDuration
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::TimelineClip::*)(double_t)>(&UnityEngine::Timeline::TimelineClip::set_blendOutDuration)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2abd870;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineClip>::get(),
                            "set_blendOutDuration",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Timeline::TimelineClip.get_blendInCurveMode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Timeline::UnityEngine__Timeline__TimelineClip__BlendCurveMode (UnityEngine::Timeline::TimelineClip::*)()>(&UnityEngine::Timeline::TimelineClip::get_blendInCurveMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2abd8f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineClip>::get(),
                            "get_blendInCurveMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Timeline::TimelineClip.set_blendInCurveMode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::TimelineClip::*)(UnityEngine::Timeline::UnityEngine__Timeline__TimelineClip__BlendCurveMode)>(&UnityEngine::Timeline::TimelineClip::set_blendInCurveMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2abd900;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineClip>::get(),
                            "set_blendInCurveMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Timeline::UnityEngine__Timeline__TimelineClip__BlendCurveMode>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Timeline::TimelineClip.get_blendOutCurveMode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Timeline::UnityEngine__Timeline__TimelineClip__BlendCurveMode (UnityEngine::Timeline::TimelineClip::*)()>(&UnityEngine::Timeline::TimelineClip::get_blendOutCurveMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2abd908;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineClip>::get(),
                            "get_blendOutCurveMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Timeline::TimelineClip.set_blendOutCurveMode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::TimelineClip::*)(UnityEngine::Timeline::UnityEngine__Timeline__TimelineClip__BlendCurveMode)>(&UnityEngine::Timeline::TimelineClip::set_blendOutCurveMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2abd910;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineClip>::get(),
                            "set_blendOutCurveMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Timeline::UnityEngine__Timeline__TimelineClip__BlendCurveMode>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Timeline::TimelineClip.get_hasBlendIn
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Timeline::TimelineClip::*)()>(&UnityEngine::Timeline::TimelineClip::get_hasBlendIn)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2abd62c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineClip>::get(),
                            "get_hasBlendIn",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Timeline::TimelineClip.get_hasBlendOut
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Timeline::TimelineClip::*)()>(&UnityEngine::Timeline::TimelineClip::get_hasBlendOut)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2abd44c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineClip>::get(),
                            "get_hasBlendOut",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Timeline::TimelineClip.get_mixInCurve
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::AnimationCurve (UnityEngine::Timeline::TimelineClip::*)()>(&UnityEngine::Timeline::TimelineClip::get_mixInCurve)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2abd918;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineClip>::get(),
                            "get_mixInCurve",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Timeline::TimelineClip.set_mixInCurve
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::TimelineClip::*)(UnityEngine::AnimationCurve)>(&UnityEngine::Timeline::TimelineClip::set_mixInCurve)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2abd9bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineClip>::get(),
                            "set_mixInCurve",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::AnimationCurve>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Timeline::TimelineClip.get_mixInPercentage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (UnityEngine::Timeline::TimelineClip::*)()>(&UnityEngine::Timeline::TimelineClip::get_mixInPercentage)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2abd9c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineClip>::get(),
                            "get_mixInPercentage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Timeline::TimelineClip.get_mixInDuration
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (UnityEngine::Timeline::TimelineClip::*)()>(&UnityEngine::Timeline::TimelineClip::get_mixInDuration)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2abd9e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineClip>::get(),
                            "get_mixInDuration",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Timeline::TimelineClip.get_mixOutCurve
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::AnimationCurve (UnityEngine::Timeline::TimelineClip::*)()>(&UnityEngine::Timeline::TimelineClip::get_mixOutCurve)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2abda28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineClip>::get(),
                            "get_mixOutCurve",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Timeline::TimelineClip.set_mixOutCurve
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::TimelineClip::*)(UnityEngine::AnimationCurve)>(&UnityEngine::Timeline::TimelineClip::set_mixOutCurve)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2abdacc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineClip>::get(),
                            "set_mixOutCurve",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::AnimationCurve>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Timeline::TimelineClip.get_mixOutTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (UnityEngine::Timeline::TimelineClip::*)()>(&UnityEngine::Timeline::TimelineClip::get_mixOutTime)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2abdad4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineClip>::get(),
                            "get_mixOutTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Timeline::TimelineClip.get_mixOutDuration
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (UnityEngine::Timeline::TimelineClip::*)()>(&UnityEngine::Timeline::TimelineClip::get_mixOutDuration)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2abdb00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineClip>::get(),
                            "get_mixOutDuration",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Timeline::TimelineClip.get_mixOutPercentage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (UnityEngine::Timeline::TimelineClip::*)()>(&UnityEngine::Timeline::TimelineClip::get_mixOutPercentage)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2abdb44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineClip>::get(),
                            "get_mixOutPercentage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Timeline::TimelineClip.get_recordable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Timeline::TimelineClip::*)()>(&UnityEngine::Timeline::TimelineClip::get_recordable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2abdb64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineClip>::get(),
                            "get_recordable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Timeline::TimelineClip.set_recordable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::TimelineClip::*)(bool)>(&UnityEngine::Timeline::TimelineClip::set_recordable)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2abdb6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineClip>::get(),
                            "set_recordable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Timeline::TimelineClip.get_exposedParameters
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::List_1<::StringW> (UnityEngine::Timeline::TimelineClip::*)()>(&UnityEngine::Timeline::TimelineClip::get_exposedParameters)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2abdb78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineClip>::get(),
                            "get_exposedParameters",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Timeline::TimelineClip.get_clipCaps
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Timeline::ClipCaps (UnityEngine::Timeline::TimelineClip::*)()>(&UnityEngine::Timeline::TimelineClip::get_clipCaps)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x2abcbd0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineClip>::get(),
                            "get_clipCaps",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Timeline::TimelineClip.Hash
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (UnityEngine::Timeline::TimelineClip::*)()>(&UnityEngine::Timeline::TimelineClip::Hash)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x2abdbf8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineClip>::get(),
                            "Hash",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Timeline::TimelineClip.EvaluateMixOut
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (UnityEngine::Timeline::TimelineClip::*)(double_t)>(&UnityEngine::Timeline::TimelineClip::EvaluateMixOut)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x2abdde4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineClip>::get(),
                            "EvaluateMixOut",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Timeline::TimelineClip.EvaluateMixIn
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (UnityEngine::Timeline::TimelineClip::*)(double_t)>(&UnityEngine::Timeline::TimelineClip::EvaluateMixIn)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x2abded8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineClip>::get(),
                            "EvaluateMixIn",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Timeline::TimelineClip.GetDefaultMixInCurve
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::AnimationCurve (*)()>(&UnityEngine::Timeline::TimelineClip::GetDefaultMixInCurve)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2abd9a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineClip>::get(),
                            "GetDefaultMixInCurve",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Timeline::TimelineClip.GetDefaultMixOutCurve
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::AnimationCurve (*)()>(&UnityEngine::Timeline::TimelineClip::GetDefaultMixOutCurve)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2abdab4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineClip>::get(),
                            "GetDefaultMixOutCurve",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Timeline::TimelineClip.ToLocalTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (UnityEngine::Timeline::TimelineClip::*)(double_t)>(&UnityEngine::Timeline::TimelineClip::ToLocalTime)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x2abdfac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineClip>::get(),
                            "ToLocalTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Timeline::TimelineClip.ToLocalTimeUnbound
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (UnityEngine::Timeline::TimelineClip::*)(double_t)>(&UnityEngine::Timeline::TimelineClip::ToLocalTimeUnbound)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2abe258;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineClip>::get(),
                            "ToLocalTimeUnbound",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Timeline::TimelineClip.FromLocalTimeUnbound
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (UnityEngine::Timeline::TimelineClip::*)(double_t)>(&UnityEngine::Timeline::TimelineClip::FromLocalTimeUnbound)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2abe2a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineClip>::get(),
                            "FromLocalTimeUnbound",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Timeline::TimelineClip.get_animationClip
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::AnimationClip (UnityEngine::Timeline::TimelineClip::*)()>(&UnityEngine::Timeline::TimelineClip::get_animationClip)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x2abe2ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineClip>::get(),
                            "get_animationClip",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Timeline::TimelineClip.SanitizeTimeValue
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (*)(double_t, double_t)>(&UnityEngine::Timeline::TimelineClip::SanitizeTimeValue)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x2abcda8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineClip>::get(),
                            "SanitizeTimeValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Timeline::TimelineClip.get_postExtrapolationMode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Timeline::UnityEngine__Timeline__TimelineClip__ClipExtrapolation (UnityEngine::Timeline::TimelineClip::*)()>(&UnityEngine::Timeline::TimelineClip::get_postExtrapolationMode)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2abe3e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineClip>::get(),
                            "get_postExtrapolationMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Timeline::TimelineClip.set_postExtrapolationMode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::TimelineClip::*)(UnityEngine::Timeline::UnityEngine__Timeline__TimelineClip__ClipExtrapolation)>(&UnityEngine::Timeline::TimelineClip::set_postExtrapolationMode)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2ab91b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineClip>::get(),
                            "set_postExtrapolationMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Timeline::UnityEngine__Timeline__TimelineClip__ClipExtrapolation>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Timeline::TimelineClip.get_preExtrapolationMode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Timeline::UnityEngine__Timeline__TimelineClip__ClipExtrapolation (UnityEngine::Timeline::TimelineClip::*)()>(&UnityEngine::Timeline::TimelineClip::get_preExtrapolationMode)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2abe408;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineClip>::get(),
                            "get_preExtrapolationMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Timeline::TimelineClip.set_preExtrapolationMode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::TimelineClip::*)(UnityEngine::Timeline::UnityEngine__Timeline__TimelineClip__ClipExtrapolation)>(&UnityEngine::Timeline::TimelineClip::set_preExtrapolationMode)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2ab9184;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineClip>::get(),
                            "set_preExtrapolationMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Timeline::UnityEngine__Timeline__TimelineClip__ClipExtrapolation>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Timeline::TimelineClip.SetPostExtrapolationTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::TimelineClip::*)(double_t)>(&UnityEngine::Timeline::TimelineClip::SetPostExtrapolationTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2abe42c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineClip>::get(),
                            "SetPostExtrapolationTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Timeline::TimelineClip.SetPreExtrapolationTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::TimelineClip::*)(double_t)>(&UnityEngine::Timeline::TimelineClip::SetPreExtrapolationTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2abe434;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineClip>::get(),
                            "SetPreExtrapolationTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Timeline::TimelineClip.IsExtrapolatedTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Timeline::TimelineClip::*)(double_t)>(&UnityEngine::Timeline::TimelineClip::IsExtrapolatedTime)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2abe43c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineClip>::get(),
                            "IsExtrapolatedTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Timeline::TimelineClip.IsPreExtrapolatedTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Timeline::TimelineClip::*)(double_t)>(&UnityEngine::Timeline::TimelineClip::IsPreExtrapolatedTime)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2abe098;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineClip>::get(),
                            "IsPreExtrapolatedTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Timeline::TimelineClip.IsPostExtrapolatedTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Timeline::TimelineClip::*)(double_t)>(&UnityEngine::Timeline::TimelineClip::IsPostExtrapolatedTime)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2abe200;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineClip>::get(),
                            "IsPostExtrapolatedTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Timeline::TimelineClip.get_extrapolatedStart
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (UnityEngine::Timeline::TimelineClip::*)()>(&UnityEngine::Timeline::TimelineClip::get_extrapolatedStart)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2abe478;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineClip>::get(),
                            "get_extrapolatedStart",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Timeline::TimelineClip.get_extrapolatedDuration
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (UnityEngine::Timeline::TimelineClip::*)()>(&UnityEngine::Timeline::TimelineClip::get_extrapolatedDuration)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x2abe490;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineClip>::get(),
                            "get_extrapolatedDuration",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Timeline::TimelineClip.GetExtrapolatedTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (*)(double_t, UnityEngine::Timeline::UnityEngine__Timeline__TimelineClip__ClipExtrapolation, double_t)>(&UnityEngine::Timeline::TimelineClip::GetExtrapolatedTime)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x2abe0e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineClip>::get(),
                            "GetExtrapolatedTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Timeline::UnityEngine__Timeline__TimelineClip__ClipExtrapolation>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Timeline::TimelineClip.CreateCurves
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::TimelineClip::*)(::StringW)>(&UnityEngine::Timeline::TimelineClip::CreateCurves)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x2abe55c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineClip>::get(),
                            "CreateCurves",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Timeline::TimelineClip.UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::TimelineClip::*)()>(&UnityEngine::Timeline::TimelineClip::UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2abe628;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineClip>::get(),
                            "UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Timeline::TimelineClip.UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::TimelineClip::*)()>(&UnityEngine::Timeline::TimelineClip::UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x2abe634;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineClip>::get(),
                            "UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Timeline::TimelineClip.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::Timeline::TimelineClip::*)()>(&UnityEngine::Timeline::TimelineClip::ToString)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x2abe66c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::Timeline::TimelineClip),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineClip>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Timeline::TimelineClip.ConformEaseValues
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::TimelineClip::*)()>(&UnityEngine::Timeline::TimelineClip::ConformEaseValues)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x2abe848;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineClip>::get(),
                            "ConformEaseValues",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Timeline::TimelineClip.CalculateEasingRatio
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (*)(double_t, double_t)>(&UnityEngine::Timeline::TimelineClip::CalculateEasingRatio)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x2abe8d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineClip>::get(),
                            "CalculateEasingRatio",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Timeline::TimelineClip.UpdateDirty
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::TimelineClip::*)(double_t, double_t)>(&UnityEngine::Timeline::TimelineClip::UpdateDirty)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2abcd9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineClip>::get(),
                            "UpdateDirty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to UnityEngine::Timeline::ICurvesOwner
constexpr  UnityEngine::Timeline::TimelineClip::operator UnityEngine::Timeline::ICurvesOwner() const noexcept {
return UnityEngine::Timeline::ICurvesOwner(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to UnityEngine::ISerializationCallbackReceiver
constexpr  UnityEngine::Timeline::TimelineClip::operator UnityEngine::ISerializationCallbackReceiver() const noexcept {
return UnityEngine::ISerializationCallbackReceiver(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::Timeline::TimelineClip::__set_m_Version(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::Timeline::TimelineClip::__get_m_Version() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void UnityEngine::Timeline::TimelineClip::__set_kDefaultClipCaps(UnityEngine::Timeline::ClipCaps value)  {
::cordl_internals::setStaticField<UnityEngine::Timeline::ClipCaps, "kDefaultClipCaps", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineClip>::get>(std::forward<UnityEngine::Timeline::ClipCaps>(value));
}
 UnityEngine::Timeline::ClipCaps UnityEngine::Timeline::TimelineClip::__get_kDefaultClipCaps()  {
return ::cordl_internals::getStaticField<UnityEngine::Timeline::ClipCaps, "kDefaultClipCaps", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineClip>::get>();
}
 void UnityEngine::Timeline::TimelineClip::__set_kDefaultClipDurationInSeconds(float_t value)  {
::cordl_internals::setStaticField<float_t, "kDefaultClipDurationInSeconds", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineClip>::get>(std::forward<float_t>(value));
}
 float_t UnityEngine::Timeline::TimelineClip::__get_kDefaultClipDurationInSeconds()  {
return ::cordl_internals::getStaticField<float_t, "kDefaultClipDurationInSeconds", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineClip>::get>();
}
 void UnityEngine::Timeline::TimelineClip::__set_kTimeScaleMin(double_t value)  {
::cordl_internals::setStaticField<double_t, "kTimeScaleMin", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineClip>::get>(std::forward<double_t>(value));
}
 double_t UnityEngine::Timeline::TimelineClip::__get_kTimeScaleMin()  {
return ::cordl_internals::getStaticField<double_t, "kTimeScaleMin", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineClip>::get>();
}
 void UnityEngine::Timeline::TimelineClip::__set_kTimeScaleMax(double_t value)  {
::cordl_internals::setStaticField<double_t, "kTimeScaleMax", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineClip>::get>(std::forward<double_t>(value));
}
 double_t UnityEngine::Timeline::TimelineClip::__get_kTimeScaleMax()  {
return ::cordl_internals::getStaticField<double_t, "kTimeScaleMax", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineClip>::get>();
}
 void UnityEngine::Timeline::TimelineClip::__set_kDefaultCurvesName(::StringW value)  {
::cordl_internals::setStaticField<::StringW, "kDefaultCurvesName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineClip>::get>(std::forward<::StringW>(value));
}
 ::StringW UnityEngine::Timeline::TimelineClip::__get_kDefaultCurvesName()  {
return ::cordl_internals::getStaticField<::StringW, "kDefaultCurvesName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineClip>::get>();
}
 void UnityEngine::Timeline::TimelineClip::__set_kMinDuration(double_t value)  {
::cordl_internals::setStaticField<double_t, "kMinDuration", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineClip>::get>(std::forward<double_t>(value));
}
 double_t UnityEngine::Timeline::TimelineClip::__get_kMinDuration()  {
return ::cordl_internals::getStaticField<double_t, "kMinDuration", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineClip>::get>();
}
 void UnityEngine::Timeline::TimelineClip::__set_kMaxTimeValue(double_t value)  {
::cordl_internals::setStaticField<double_t, "kMaxTimeValue", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineClip>::get>(std::forward<double_t>(value));
}
 double_t UnityEngine::Timeline::TimelineClip::__get_kMaxTimeValue()  {
return ::cordl_internals::getStaticField<double_t, "kMaxTimeValue", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineClip>::get>();
}
constexpr void UnityEngine::Timeline::TimelineClip::__set_m_Start(double_t value)  {
::cordl_internals::setInstanceField<double_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<double_t>(value));
}
constexpr double_t UnityEngine::Timeline::TimelineClip::__get_m_Start() const {
return ::cordl_internals::getInstanceField<double_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::Timeline::TimelineClip::__set_m_ClipIn(double_t value)  {
::cordl_internals::setInstanceField<double_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<double_t>(value));
}
constexpr double_t UnityEngine::Timeline::TimelineClip::__get_m_ClipIn() const {
return ::cordl_internals::getInstanceField<double_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::Timeline::TimelineClip::__set_m_Asset(UnityEngine::Object value)  {
::cordl_internals::setInstanceField<UnityEngine::Object, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Object>(value));
}
constexpr UnityEngine::Object UnityEngine::Timeline::TimelineClip::__get_m_Asset() const {
return ::cordl_internals::getInstanceField<UnityEngine::Object, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::Timeline::TimelineClip::__set_m_Duration(double_t value)  {
::cordl_internals::setInstanceField<double_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<double_t>(value));
}
constexpr double_t UnityEngine::Timeline::TimelineClip::__get_m_Duration() const {
return ::cordl_internals::getInstanceField<double_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::Timeline::TimelineClip::__set_m_TimeScale(double_t value)  {
::cordl_internals::setInstanceField<double_t, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<double_t>(value));
}
constexpr double_t UnityEngine::Timeline::TimelineClip::__get_m_TimeScale() const {
return ::cordl_internals::getInstanceField<double_t, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::Timeline::TimelineClip::__set_m_ParentTrack(UnityEngine::Timeline::TrackAsset value)  {
::cordl_internals::setInstanceField<UnityEngine::Timeline::TrackAsset, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Timeline::TrackAsset>(value));
}
constexpr UnityEngine::Timeline::TrackAsset UnityEngine::Timeline::TimelineClip::__get_m_ParentTrack() const {
return ::cordl_internals::getInstanceField<UnityEngine::Timeline::TrackAsset, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::Timeline::TimelineClip::__set_m_EaseInDuration(double_t value)  {
::cordl_internals::setInstanceField<double_t, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<double_t>(value));
}
constexpr double_t UnityEngine::Timeline::TimelineClip::__get_m_EaseInDuration() const {
return ::cordl_internals::getInstanceField<double_t, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::Timeline::TimelineClip::__set_m_EaseOutDuration(double_t value)  {
::cordl_internals::setInstanceField<double_t, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<double_t>(value));
}
constexpr double_t UnityEngine::Timeline::TimelineClip::__get_m_EaseOutDuration() const {
return ::cordl_internals::getInstanceField<double_t, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::Timeline::TimelineClip::__set_m_BlendInDuration(double_t value)  {
::cordl_internals::setInstanceField<double_t, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<double_t>(value));
}
constexpr double_t UnityEngine::Timeline::TimelineClip::__get_m_BlendInDuration() const {
return ::cordl_internals::getInstanceField<double_t, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::Timeline::TimelineClip::__set_m_BlendOutDuration(double_t value)  {
::cordl_internals::setInstanceField<double_t, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<double_t>(value));
}
constexpr double_t UnityEngine::Timeline::TimelineClip::__get_m_BlendOutDuration() const {
return ::cordl_internals::getInstanceField<double_t, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::Timeline::TimelineClip::__set_m_MixInCurve(UnityEngine::AnimationCurve value)  {
::cordl_internals::setInstanceField<UnityEngine::AnimationCurve, 0x68>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::AnimationCurve>(value));
}
constexpr UnityEngine::AnimationCurve UnityEngine::Timeline::TimelineClip::__get_m_MixInCurve() const {
return ::cordl_internals::getInstanceField<UnityEngine::AnimationCurve, 0x68>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::Timeline::TimelineClip::__set_m_MixOutCurve(UnityEngine::AnimationCurve value)  {
::cordl_internals::setInstanceField<UnityEngine::AnimationCurve, 0x70>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::AnimationCurve>(value));
}
constexpr UnityEngine::AnimationCurve UnityEngine::Timeline::TimelineClip::__get_m_MixOutCurve() const {
return ::cordl_internals::getInstanceField<UnityEngine::AnimationCurve, 0x70>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::Timeline::TimelineClip::__set_m_BlendInCurveMode(UnityEngine::Timeline::UnityEngine__Timeline__TimelineClip__BlendCurveMode value)  {
::cordl_internals::setInstanceField<UnityEngine::Timeline::UnityEngine__Timeline__TimelineClip__BlendCurveMode, 0x78>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Timeline::UnityEngine__Timeline__TimelineClip__BlendCurveMode>(value));
}
constexpr UnityEngine::Timeline::UnityEngine__Timeline__TimelineClip__BlendCurveMode UnityEngine::Timeline::TimelineClip::__get_m_BlendInCurveMode() const {
return ::cordl_internals::getInstanceField<UnityEngine::Timeline::UnityEngine__Timeline__TimelineClip__BlendCurveMode, 0x78>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::Timeline::TimelineClip::__set_m_BlendOutCurveMode(UnityEngine::Timeline::UnityEngine__Timeline__TimelineClip__BlendCurveMode value)  {
::cordl_internals::setInstanceField<UnityEngine::Timeline::UnityEngine__Timeline__TimelineClip__BlendCurveMode, 0x7c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Timeline::UnityEngine__Timeline__TimelineClip__BlendCurveMode>(value));
}
constexpr UnityEngine::Timeline::UnityEngine__Timeline__TimelineClip__BlendCurveMode UnityEngine::Timeline::TimelineClip::__get_m_BlendOutCurveMode() const {
return ::cordl_internals::getInstanceField<UnityEngine::Timeline::UnityEngine__Timeline__TimelineClip__BlendCurveMode, 0x7c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::Timeline::TimelineClip::__set_m_ExposedParameterNames(System::Collections::Generic::List_1<::StringW> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<::StringW>, 0x80>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::List_1<::StringW>>(value));
}
constexpr System::Collections::Generic::List_1<::StringW> UnityEngine::Timeline::TimelineClip::__get_m_ExposedParameterNames() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<::StringW>, 0x80>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::Timeline::TimelineClip::__set_m_AnimationCurves(UnityEngine::AnimationClip value)  {
::cordl_internals::setInstanceField<UnityEngine::AnimationClip, 0x88>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::AnimationClip>(value));
}
constexpr UnityEngine::AnimationClip UnityEngine::Timeline::TimelineClip::__get_m_AnimationCurves() const {
return ::cordl_internals::getInstanceField<UnityEngine::AnimationClip, 0x88>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::Timeline::TimelineClip::__set_m_Recordable(bool value)  {
::cordl_internals::setInstanceField<bool, 0x90>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool UnityEngine::Timeline::TimelineClip::__get_m_Recordable() const {
return ::cordl_internals::getInstanceField<bool, 0x90>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::Timeline::TimelineClip::__set_m_PostExtrapolationMode(UnityEngine::Timeline::UnityEngine__Timeline__TimelineClip__ClipExtrapolation value)  {
::cordl_internals::setInstanceField<UnityEngine::Timeline::UnityEngine__Timeline__TimelineClip__ClipExtrapolation, 0x94>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Timeline::UnityEngine__Timeline__TimelineClip__ClipExtrapolation>(value));
}
constexpr UnityEngine::Timeline::UnityEngine__Timeline__TimelineClip__ClipExtrapolation UnityEngine::Timeline::TimelineClip::__get_m_PostExtrapolationMode() const {
return ::cordl_internals::getInstanceField<UnityEngine::Timeline::UnityEngine__Timeline__TimelineClip__ClipExtrapolation, 0x94>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::Timeline::TimelineClip::__set_m_PreExtrapolationMode(UnityEngine::Timeline::UnityEngine__Timeline__TimelineClip__ClipExtrapolation value)  {
::cordl_internals::setInstanceField<UnityEngine::Timeline::UnityEngine__Timeline__TimelineClip__ClipExtrapolation, 0x98>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Timeline::UnityEngine__Timeline__TimelineClip__ClipExtrapolation>(value));
}
constexpr UnityEngine::Timeline::UnityEngine__Timeline__TimelineClip__ClipExtrapolation UnityEngine::Timeline::TimelineClip::__get_m_PreExtrapolationMode() const {
return ::cordl_internals::getInstanceField<UnityEngine::Timeline::UnityEngine__Timeline__TimelineClip__ClipExtrapolation, 0x98>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::Timeline::TimelineClip::__set_m_PostExtrapolationTime(double_t value)  {
::cordl_internals::setInstanceField<double_t, 0xa0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<double_t>(value));
}
constexpr double_t UnityEngine::Timeline::TimelineClip::__get_m_PostExtrapolationTime() const {
return ::cordl_internals::getInstanceField<double_t, 0xa0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::Timeline::TimelineClip::__set_m_PreExtrapolationTime(double_t value)  {
::cordl_internals::setInstanceField<double_t, 0xa8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<double_t>(value));
}
constexpr double_t UnityEngine::Timeline::TimelineClip::__get_m_PreExtrapolationTime() const {
return ::cordl_internals::getInstanceField<double_t, 0xa8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::Timeline::TimelineClip::__set_m_DisplayName(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0xb0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW UnityEngine::Timeline::TimelineClip::__get_m_DisplayName() const {
return ::cordl_internals::getInstanceField<::StringW, 0xb0>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void UnityEngine::Timeline::TimelineClip::UpgradeToLatestVersion()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineClip>::get(),
                            "UpgradeToLatestVersion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters [CppParam { name: "parent", ty: "UnityEngine::Timeline::TrackAsset", modifiers: "", def_value: None }]
 UnityEngine::Timeline::TimelineClip::TimelineClip(UnityEngine::Timeline::TrackAsset parent)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<TimelineClip>(parent))) {}
 void UnityEngine::Timeline::TimelineClip::_ctor(UnityEngine::Timeline::TrackAsset parent)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineClip>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Timeline::TrackAsset>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, parent);
}
 bool UnityEngine::Timeline::TimelineClip::get_hasPreExtrapolation()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineClip>::get(),
                            "get_hasPreExtrapolation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool UnityEngine::Timeline::TimelineClip::get_hasPostExtrapolation()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineClip>::get(),
                            "get_hasPostExtrapolation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 double_t UnityEngine::Timeline::TimelineClip::get_timeScale()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineClip>::get(),
                            "get_timeScale",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<double_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::Timeline::TimelineClip::set_timeScale(double_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineClip>::get(),
                            "set_timeScale",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 double_t UnityEngine::Timeline::TimelineClip::get_start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineClip>::get(),
                            "get_start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<double_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::Timeline::TimelineClip::set_start(double_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineClip>::get(),
                            "set_start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 double_t UnityEngine::Timeline::TimelineClip::get_duration()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineClip>::get(),
                            "get_duration",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<double_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::Timeline::TimelineClip::set_duration(double_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineClip>::get(),
                            "set_duration",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 double_t UnityEngine::Timeline::TimelineClip::get_end()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineClip>::get(),
                            "get_end",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<double_t, false>(const_cast<void*>(instance), ___internal_method);
}
 double_t UnityEngine::Timeline::TimelineClip::get_clipIn()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineClip>::get(),
                            "get_clipIn",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<double_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::Timeline::TimelineClip::set_clipIn(double_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineClip>::get(),
                            "set_clipIn",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::StringW UnityEngine::Timeline::TimelineClip::get_displayName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineClip>::get(),
                            "get_displayName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::Timeline::TimelineClip::set_displayName(::StringW value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineClip>::get(),
                            "set_displayName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 double_t UnityEngine::Timeline::TimelineClip::get_clipAssetDuration()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineClip>::get(),
                            "get_clipAssetDuration",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<double_t, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::AnimationClip UnityEngine::Timeline::TimelineClip::get_curves()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineClip>::get(),
                            "get_curves",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::AnimationClip, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::Timeline::TimelineClip::set_curves(UnityEngine::AnimationClip value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineClip>::get(),
                            "set_curves",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::AnimationClip>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::StringW UnityEngine::Timeline::TimelineClip::UnityEngine_Timeline_ICurvesOwner_get_defaultCurvesName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineClip>::get(),
                            "UnityEngine.Timeline.ICurvesOwner.get_defaultCurvesName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 bool UnityEngine::Timeline::TimelineClip::get_hasCurves()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineClip>::get(),
                            "get_hasCurves",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::Object UnityEngine::Timeline::TimelineClip::get_asset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineClip>::get(),
                            "get_asset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Object, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::Timeline::TimelineClip::set_asset(UnityEngine::Object value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineClip>::get(),
                            "set_asset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Object>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 UnityEngine::Object UnityEngine::Timeline::TimelineClip::UnityEngine_Timeline_ICurvesOwner_get_assetOwner()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineClip>::get(),
                            "UnityEngine.Timeline.ICurvesOwner.get_assetOwner",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Object, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::Timeline::TrackAsset UnityEngine::Timeline::TimelineClip::UnityEngine_Timeline_ICurvesOwner_get_targetTrack()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineClip>::get(),
                            "UnityEngine.Timeline.ICurvesOwner.get_targetTrack",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Timeline::TrackAsset, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::Object UnityEngine::Timeline::TimelineClip::get_underlyingAsset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineClip>::get(),
                            "get_underlyingAsset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Object, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::Timeline::TimelineClip::set_underlyingAsset(UnityEngine::Object value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineClip>::get(),
                            "set_underlyingAsset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Object>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 UnityEngine::Timeline::TrackAsset UnityEngine::Timeline::TimelineClip::get_parentTrack()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineClip>::get(),
                            "get_parentTrack",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Timeline::TrackAsset, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::Timeline::TimelineClip::set_parentTrack(UnityEngine::Timeline::TrackAsset value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineClip>::get(),
                            "set_parentTrack",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Timeline::TrackAsset>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 UnityEngine::Timeline::TrackAsset UnityEngine::Timeline::TimelineClip::GetParentTrack()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineClip>::get(),
                            "GetParentTrack",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Timeline::TrackAsset, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::Timeline::TimelineClip::SetParentTrack_Internal(UnityEngine::Timeline::TrackAsset newParentTrack)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineClip>::get(),
                            "SetParentTrack_Internal",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Timeline::TrackAsset>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, newParentTrack);
}
 double_t UnityEngine::Timeline::TimelineClip::get_easeInDuration()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineClip>::get(),
                            "get_easeInDuration",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<double_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::Timeline::TimelineClip::set_easeInDuration(double_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineClip>::get(),
                            "set_easeInDuration",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 double_t UnityEngine::Timeline::TimelineClip::get_easeOutDuration()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineClip>::get(),
                            "get_easeOutDuration",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<double_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::Timeline::TimelineClip::set_easeOutDuration(double_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineClip>::get(),
                            "set_easeOutDuration",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 double_t UnityEngine::Timeline::TimelineClip::get_eastOutTime()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineClip>::get(),
                            "get_eastOutTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<double_t, false>(const_cast<void*>(instance), ___internal_method);
}
 double_t UnityEngine::Timeline::TimelineClip::get_easeOutTime()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineClip>::get(),
                            "get_easeOutTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<double_t, false>(const_cast<void*>(instance), ___internal_method);
}
 double_t UnityEngine::Timeline::TimelineClip::get_blendInDuration()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineClip>::get(),
                            "get_blendInDuration",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<double_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::Timeline::TimelineClip::set_blendInDuration(double_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineClip>::get(),
                            "set_blendInDuration",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 double_t UnityEngine::Timeline::TimelineClip::get_blendOutDuration()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineClip>::get(),
                            "get_blendOutDuration",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<double_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::Timeline::TimelineClip::set_blendOutDuration(double_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineClip>::get(),
                            "set_blendOutDuration",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 UnityEngine::Timeline::UnityEngine__Timeline__TimelineClip__BlendCurveMode UnityEngine::Timeline::TimelineClip::get_blendInCurveMode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineClip>::get(),
                            "get_blendInCurveMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Timeline::UnityEngine__Timeline__TimelineClip__BlendCurveMode, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::Timeline::TimelineClip::set_blendInCurveMode(UnityEngine::Timeline::UnityEngine__Timeline__TimelineClip__BlendCurveMode value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineClip>::get(),
                            "set_blendInCurveMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Timeline::UnityEngine__Timeline__TimelineClip__BlendCurveMode>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 UnityEngine::Timeline::UnityEngine__Timeline__TimelineClip__BlendCurveMode UnityEngine::Timeline::TimelineClip::get_blendOutCurveMode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineClip>::get(),
                            "get_blendOutCurveMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Timeline::UnityEngine__Timeline__TimelineClip__BlendCurveMode, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::Timeline::TimelineClip::set_blendOutCurveMode(UnityEngine::Timeline::UnityEngine__Timeline__TimelineClip__BlendCurveMode value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineClip>::get(),
                            "set_blendOutCurveMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Timeline::UnityEngine__Timeline__TimelineClip__BlendCurveMode>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool UnityEngine::Timeline::TimelineClip::get_hasBlendIn()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineClip>::get(),
                            "get_hasBlendIn",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool UnityEngine::Timeline::TimelineClip::get_hasBlendOut()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineClip>::get(),
                            "get_hasBlendOut",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::AnimationCurve UnityEngine::Timeline::TimelineClip::get_mixInCurve()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineClip>::get(),
                            "get_mixInCurve",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::AnimationCurve, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::Timeline::TimelineClip::set_mixInCurve(UnityEngine::AnimationCurve value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineClip>::get(),
                            "set_mixInCurve",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::AnimationCurve>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 float_t UnityEngine::Timeline::TimelineClip::get_mixInPercentage()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineClip>::get(),
                            "get_mixInPercentage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 double_t UnityEngine::Timeline::TimelineClip::get_mixInDuration()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineClip>::get(),
                            "get_mixInDuration",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<double_t, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::AnimationCurve UnityEngine::Timeline::TimelineClip::get_mixOutCurve()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineClip>::get(),
                            "get_mixOutCurve",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::AnimationCurve, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::Timeline::TimelineClip::set_mixOutCurve(UnityEngine::AnimationCurve value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineClip>::get(),
                            "set_mixOutCurve",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::AnimationCurve>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 double_t UnityEngine::Timeline::TimelineClip::get_mixOutTime()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineClip>::get(),
                            "get_mixOutTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<double_t, false>(const_cast<void*>(instance), ___internal_method);
}
 double_t UnityEngine::Timeline::TimelineClip::get_mixOutDuration()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineClip>::get(),
                            "get_mixOutDuration",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<double_t, false>(const_cast<void*>(instance), ___internal_method);
}
 float_t UnityEngine::Timeline::TimelineClip::get_mixOutPercentage()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineClip>::get(),
                            "get_mixOutPercentage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 bool UnityEngine::Timeline::TimelineClip::get_recordable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineClip>::get(),
                            "get_recordable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::Timeline::TimelineClip::set_recordable(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineClip>::get(),
                            "set_recordable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 System::Collections::Generic::List_1<::StringW> UnityEngine::Timeline::TimelineClip::get_exposedParameters()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineClip>::get(),
                            "get_exposedParameters",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::List_1<::StringW>, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::Timeline::ClipCaps UnityEngine::Timeline::TimelineClip::get_clipCaps()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineClip>::get(),
                            "get_clipCaps",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Timeline::ClipCaps, false>(const_cast<void*>(instance), ___internal_method);
}
 int32_t UnityEngine::Timeline::TimelineClip::Hash()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineClip>::get(),
                            "Hash",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 float_t UnityEngine::Timeline::TimelineClip::EvaluateMixOut(double_t time)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineClip>::get(),
                            "EvaluateMixOut",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method, time);
}
 float_t UnityEngine::Timeline::TimelineClip::EvaluateMixIn(double_t time)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineClip>::get(),
                            "EvaluateMixIn",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method, time);
}
 UnityEngine::AnimationCurve UnityEngine::Timeline::TimelineClip::GetDefaultMixInCurve()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineClip>::get(),
                            "GetDefaultMixInCurve",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::AnimationCurve, false>(nullptr, ___internal_method);
}
 UnityEngine::AnimationCurve UnityEngine::Timeline::TimelineClip::GetDefaultMixOutCurve()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineClip>::get(),
                            "GetDefaultMixOutCurve",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::AnimationCurve, false>(nullptr, ___internal_method);
}
 double_t UnityEngine::Timeline::TimelineClip::ToLocalTime(double_t time)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineClip>::get(),
                            "ToLocalTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<double_t, false>(const_cast<void*>(instance), ___internal_method, time);
}
 double_t UnityEngine::Timeline::TimelineClip::ToLocalTimeUnbound(double_t time)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineClip>::get(),
                            "ToLocalTimeUnbound",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<double_t, false>(const_cast<void*>(instance), ___internal_method, time);
}
 double_t UnityEngine::Timeline::TimelineClip::FromLocalTimeUnbound(double_t time)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineClip>::get(),
                            "FromLocalTimeUnbound",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<double_t, false>(const_cast<void*>(instance), ___internal_method, time);
}
 UnityEngine::AnimationClip UnityEngine::Timeline::TimelineClip::get_animationClip()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineClip>::get(),
                            "get_animationClip",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::AnimationClip, false>(const_cast<void*>(instance), ___internal_method);
}
 double_t UnityEngine::Timeline::TimelineClip::SanitizeTimeValue(double_t value, double_t defaultValue)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineClip>::get(),
                            "SanitizeTimeValue",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<double_t, false>(nullptr, ___internal_method, value, defaultValue);
}
 UnityEngine::Timeline::UnityEngine__Timeline__TimelineClip__ClipExtrapolation UnityEngine::Timeline::TimelineClip::get_postExtrapolationMode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineClip>::get(),
                            "get_postExtrapolationMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Timeline::UnityEngine__Timeline__TimelineClip__ClipExtrapolation, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::Timeline::TimelineClip::set_postExtrapolationMode(UnityEngine::Timeline::UnityEngine__Timeline__TimelineClip__ClipExtrapolation value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineClip>::get(),
                            "set_postExtrapolationMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Timeline::UnityEngine__Timeline__TimelineClip__ClipExtrapolation>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 UnityEngine::Timeline::UnityEngine__Timeline__TimelineClip__ClipExtrapolation UnityEngine::Timeline::TimelineClip::get_preExtrapolationMode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineClip>::get(),
                            "get_preExtrapolationMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Timeline::UnityEngine__Timeline__TimelineClip__ClipExtrapolation, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::Timeline::TimelineClip::set_preExtrapolationMode(UnityEngine::Timeline::UnityEngine__Timeline__TimelineClip__ClipExtrapolation value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineClip>::get(),
                            "set_preExtrapolationMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Timeline::UnityEngine__Timeline__TimelineClip__ClipExtrapolation>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void UnityEngine::Timeline::TimelineClip::SetPostExtrapolationTime(double_t time)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineClip>::get(),
                            "SetPostExtrapolationTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, time);
}
 void UnityEngine::Timeline::TimelineClip::SetPreExtrapolationTime(double_t time)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineClip>::get(),
                            "SetPreExtrapolationTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, time);
}
 bool UnityEngine::Timeline::TimelineClip::IsExtrapolatedTime(double_t sequenceTime)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineClip>::get(),
                            "IsExtrapolatedTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, sequenceTime);
}
 bool UnityEngine::Timeline::TimelineClip::IsPreExtrapolatedTime(double_t sequenceTime)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineClip>::get(),
                            "IsPreExtrapolatedTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, sequenceTime);
}
 bool UnityEngine::Timeline::TimelineClip::IsPostExtrapolatedTime(double_t sequenceTime)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineClip>::get(),
                            "IsPostExtrapolatedTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, sequenceTime);
}
 double_t UnityEngine::Timeline::TimelineClip::get_extrapolatedStart()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineClip>::get(),
                            "get_extrapolatedStart",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<double_t, false>(const_cast<void*>(instance), ___internal_method);
}
 double_t UnityEngine::Timeline::TimelineClip::get_extrapolatedDuration()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineClip>::get(),
                            "get_extrapolatedDuration",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<double_t, false>(const_cast<void*>(instance), ___internal_method);
}
 double_t UnityEngine::Timeline::TimelineClip::GetExtrapolatedTime(double_t time, UnityEngine::Timeline::UnityEngine__Timeline__TimelineClip__ClipExtrapolation mode, double_t duration)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineClip>::get(),
                            "GetExtrapolatedTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Timeline::UnityEngine__Timeline__TimelineClip__ClipExtrapolation>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<double_t, false>(nullptr, ___internal_method, time, mode, duration);
}
 void UnityEngine::Timeline::TimelineClip::CreateCurves(::StringW curvesClipName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineClip>::get(),
                            "CreateCurves",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, curvesClipName);
}
 void UnityEngine::Timeline::TimelineClip::UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineClip>::get(),
                            "UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::Timeline::TimelineClip::UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineClip>::get(),
                            "UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW UnityEngine::Timeline::TimelineClip::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineClip>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::Timeline::TimelineClip::ConformEaseValues()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineClip>::get(),
                            "ConformEaseValues",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 double_t UnityEngine::Timeline::TimelineClip::CalculateEasingRatio(double_t easeIn, double_t easeOut)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineClip>::get(),
                            "CalculateEasingRatio",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<double_t, false>(nullptr, ___internal_method, easeIn, easeOut);
}
 void UnityEngine::Timeline::TimelineClip::UpdateDirty(double_t oldValue, double_t newValue)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Timeline::TimelineClip>::get(),
                            "UpdateDirty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, oldValue, newValue);
}
