#pragma once
#include "GlobalNamespace/zzzz__LightTranslationGroupEffect_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "Tweening/zzzz__FloatTween_def.hpp"
#include "GlobalNamespace/zzzz__LightTranslationBeatmapEventData_def.hpp"
#include "GlobalNamespace/zzzz__EaseType_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataCallback_1_def.hpp"
#include "Tweening/zzzz__SongTimeTweeningManager_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataCallbackWrapper_def.hpp"
#include "GlobalNamespace/zzzz__LightTranslationGroupEffect_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCallbacksController_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__LightTranslationGroupEffect__InitData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__LightTranslationGroupEffect__InitData::*)(int32_t, int32_t, bool, bool, bool, UnityEngine::Transform, UnityEngine::Transform, UnityEngine::Transform, UnityEngine::Vector2, UnityEngine::Vector2, UnityEngine::Vector2, UnityEngine::Vector2, UnityEngine::Vector2, UnityEngine::Vector2)>(&GlobalNamespace::GlobalNamespace__LightTranslationGroupEffect__InitData::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x22606e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LightTranslationGroupEffect__InitData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Transform>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Transform>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Transform>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector2>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::GlobalNamespace__LightTranslationGroupEffect__InitData::__set_groupId(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__LightTranslationGroupEffect__InitData::__get_groupId() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__LightTranslationGroupEffect__InitData::__set_elementId(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x14>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__LightTranslationGroupEffect__InitData::__get_elementId() const {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__LightTranslationGroupEffect__InitData::__set_xMirrored(bool value)  {
::cordl_internals::setInstanceField<bool, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::GlobalNamespace__LightTranslationGroupEffect__InitData::__get_xMirrored() const {
return ::cordl_internals::getInstanceField<bool, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__LightTranslationGroupEffect__InitData::__set_yMirrored(bool value)  {
::cordl_internals::setInstanceField<bool, 0x19>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::GlobalNamespace__LightTranslationGroupEffect__InitData::__get_yMirrored() const {
return ::cordl_internals::getInstanceField<bool, 0x19>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__LightTranslationGroupEffect__InitData::__set_zMirrored(bool value)  {
::cordl_internals::setInstanceField<bool, 0x1a>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::GlobalNamespace__LightTranslationGroupEffect__InitData::__get_zMirrored() const {
return ::cordl_internals::getInstanceField<bool, 0x1a>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__LightTranslationGroupEffect__InitData::__set_xTransform(UnityEngine::Transform value)  {
::cordl_internals::setInstanceField<UnityEngine::Transform, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Transform>(value));
}
constexpr UnityEngine::Transform GlobalNamespace::GlobalNamespace__LightTranslationGroupEffect__InitData::__get_xTransform() const {
return ::cordl_internals::getInstanceField<UnityEngine::Transform, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__LightTranslationGroupEffect__InitData::__set_yTransform(UnityEngine::Transform value)  {
::cordl_internals::setInstanceField<UnityEngine::Transform, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Transform>(value));
}
constexpr UnityEngine::Transform GlobalNamespace::GlobalNamespace__LightTranslationGroupEffect__InitData::__get_yTransform() const {
return ::cordl_internals::getInstanceField<UnityEngine::Transform, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__LightTranslationGroupEffect__InitData::__set_zTransform(UnityEngine::Transform value)  {
::cordl_internals::setInstanceField<UnityEngine::Transform, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Transform>(value));
}
constexpr UnityEngine::Transform GlobalNamespace::GlobalNamespace__LightTranslationGroupEffect__InitData::__get_zTransform() const {
return ::cordl_internals::getInstanceField<UnityEngine::Transform, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__LightTranslationGroupEffect__InitData::__set_xTranslationLimits(UnityEngine::Vector2 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector2, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Vector2>(value));
}
constexpr UnityEngine::Vector2 GlobalNamespace::GlobalNamespace__LightTranslationGroupEffect__InitData::__get_xTranslationLimits() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector2, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__LightTranslationGroupEffect__InitData::__set_xDistributionLimits(UnityEngine::Vector2 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector2, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Vector2>(value));
}
constexpr UnityEngine::Vector2 GlobalNamespace::GlobalNamespace__LightTranslationGroupEffect__InitData::__get_xDistributionLimits() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector2, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__LightTranslationGroupEffect__InitData::__set_yTranslationLimits(UnityEngine::Vector2 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector2, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Vector2>(value));
}
constexpr UnityEngine::Vector2 GlobalNamespace::GlobalNamespace__LightTranslationGroupEffect__InitData::__get_yTranslationLimits() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector2, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__LightTranslationGroupEffect__InitData::__set_yDistributionLimits(UnityEngine::Vector2 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector2, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Vector2>(value));
}
constexpr UnityEngine::Vector2 GlobalNamespace::GlobalNamespace__LightTranslationGroupEffect__InitData::__get_yDistributionLimits() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector2, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__LightTranslationGroupEffect__InitData::__set_zTranslationLimits(UnityEngine::Vector2 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector2, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Vector2>(value));
}
constexpr UnityEngine::Vector2 GlobalNamespace::GlobalNamespace__LightTranslationGroupEffect__InitData::__get_zTranslationLimits() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector2, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__LightTranslationGroupEffect__InitData::__set_zDistributionLimits(UnityEngine::Vector2 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector2, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Vector2>(value));
}
constexpr UnityEngine::Vector2 GlobalNamespace::GlobalNamespace__LightTranslationGroupEffect__InitData::__get_zDistributionLimits() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector2, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
 GlobalNamespace::GlobalNamespace__LightTranslationGroupEffect__InitData GlobalNamespace::GlobalNamespace__LightTranslationGroupEffect__InitData::New_ctor(int32_t groupId, int32_t elementId, bool xMirrored, bool yMirrored, bool zMirrored, UnityEngine::Transform xTransform, UnityEngine::Transform yTransform, UnityEngine::Transform zTransform, UnityEngine::Vector2 xTranslationLimits, UnityEngine::Vector2 xDistributionLimits, UnityEngine::Vector2 yTranslationLimits, UnityEngine::Vector2 yDistributionLimits, UnityEngine::Vector2 zTranslationLimits, UnityEngine::Vector2 zDistributionLimits)  {
GlobalNamespace::GlobalNamespace__LightTranslationGroupEffect__InitData o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::GlobalNamespace__LightTranslationGroupEffect__InitData>(groupId, elementId, xMirrored, yMirrored, zMirrored, xTransform, yTransform, zTransform, xTranslationLimits, xDistributionLimits, yTranslationLimits, yDistributionLimits, zTranslationLimits, zDistributionLimits))};
return o;
}
 void GlobalNamespace::GlobalNamespace__LightTranslationGroupEffect__InitData::_ctor(int32_t groupId, int32_t elementId, bool xMirrored, bool yMirrored, bool zMirrored, UnityEngine::Transform xTransform, UnityEngine::Transform yTransform, UnityEngine::Transform zTransform, UnityEngine::Vector2 xTranslationLimits, UnityEngine::Vector2 xDistributionLimits, UnityEngine::Vector2 yTranslationLimits, UnityEngine::Vector2 yDistributionLimits, UnityEngine::Vector2 zTranslationLimits, UnityEngine::Vector2 zDistributionLimits)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LightTranslationGroupEffect__InitData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Transform>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Transform>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Transform>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector2>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, groupId, elementId, xMirrored, yMirrored, zMirrored, xTransform, yTransform, zTransform, xTranslationLimits, xDistributionLimits, yTranslationLimits, yDistributionLimits, zTranslationLimits, zDistributionLimits);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__LightTranslationGroupEffect____c__DisplayClass12_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__LightTranslationGroupEffect____c__DisplayClass12_0::*)()>(&GlobalNamespace::GlobalNamespace__LightTranslationGroupEffect____c__DisplayClass12_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2260488;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LightTranslationGroupEffect____c__DisplayClass12_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__LightTranslationGroupEffect____c__DisplayClass12_0._GetTranslationEventHandler_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__LightTranslationGroupEffect____c__DisplayClass12_0::*)(GlobalNamespace::LightTranslationBeatmapEventData)>(&GlobalNamespace::GlobalNamespace__LightTranslationGroupEffect____c__DisplayClass12_0::_GetTranslationEventHandler_b__0)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x22607b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LightTranslationGroupEffect____c__DisplayClass12_0>::get(),
                            "<GetTranslationEventHandler>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::LightTranslationBeatmapEventData>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::GlobalNamespace__LightTranslationGroupEffect____c__DisplayClass12_0::__set_translationTween(Tweening::FloatTween value)  {
::cordl_internals::setInstanceField<Tweening::FloatTween, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Tweening::FloatTween>(value));
}
constexpr Tweening::FloatTween GlobalNamespace::GlobalNamespace__LightTranslationGroupEffect____c__DisplayClass12_0::__get_translationTween() const {
return ::cordl_internals::getInstanceField<Tweening::FloatTween, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__LightTranslationGroupEffect____c__DisplayClass12_0::__set_translationLimits(UnityEngine::Vector2 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector2, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Vector2>(value));
}
constexpr UnityEngine::Vector2 GlobalNamespace::GlobalNamespace__LightTranslationGroupEffect____c__DisplayClass12_0::__get_translationLimits() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector2, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__LightTranslationGroupEffect____c__DisplayClass12_0::__set_distributionLimits(UnityEngine::Vector2 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector2, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Vector2>(value));
}
constexpr UnityEngine::Vector2 GlobalNamespace::GlobalNamespace__LightTranslationGroupEffect____c__DisplayClass12_0::__get_distributionLimits() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector2, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__LightTranslationGroupEffect____c__DisplayClass12_0::__set_mirrored(bool value)  {
::cordl_internals::setInstanceField<bool, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::GlobalNamespace__LightTranslationGroupEffect____c__DisplayClass12_0::__get_mirrored() const {
return ::cordl_internals::getInstanceField<bool, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__LightTranslationGroupEffect____c__DisplayClass12_0::__set___4__this(GlobalNamespace::LightTranslationGroupEffect value)  {
::cordl_internals::setInstanceField<GlobalNamespace::LightTranslationGroupEffect, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::LightTranslationGroupEffect>(value));
}
constexpr GlobalNamespace::LightTranslationGroupEffect GlobalNamespace::GlobalNamespace__LightTranslationGroupEffect____c__DisplayClass12_0::__get___4__this() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::LightTranslationGroupEffect, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
 GlobalNamespace::GlobalNamespace__LightTranslationGroupEffect____c__DisplayClass12_0 GlobalNamespace::GlobalNamespace__LightTranslationGroupEffect____c__DisplayClass12_0::New_ctor()  {
GlobalNamespace::GlobalNamespace__LightTranslationGroupEffect____c__DisplayClass12_0 o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::GlobalNamespace__LightTranslationGroupEffect____c__DisplayClass12_0>())};
return o;
}
 void GlobalNamespace::GlobalNamespace__LightTranslationGroupEffect____c__DisplayClass12_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LightTranslationGroupEffect____c__DisplayClass12_0>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__LightTranslationGroupEffect____c__DisplayClass12_0::_GetTranslationEventHandler_b__0(GlobalNamespace::LightTranslationBeatmapEventData currentEventData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__LightTranslationGroupEffect____c__DisplayClass12_0>::get(),
                            "<GetTranslationEventHandler>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::LightTranslationBeatmapEventData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, currentEventData);
}
//  Writing Method size for method: GlobalNamespace::LightTranslationGroupEffect._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LightTranslationGroupEffect::*)(GlobalNamespace::GlobalNamespace__LightTranslationGroupEffect__InitData, Tweening::SongTimeTweeningManager, GlobalNamespace::BeatmapCallbacksController)>(&GlobalNamespace::LightTranslationGroupEffect::_ctor)> {
  constexpr static std::size_t size = 0xac0;
  constexpr static std::size_t addrs = 0x225f870;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LightTranslationGroupEffect>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__LightTranslationGroupEffect__InitData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Tweening::SongTimeTweeningManager>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::BeatmapCallbacksController>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LightTranslationGroupEffect.Cleanup
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LightTranslationGroupEffect::*)()>(&GlobalNamespace::LightTranslationGroupEffect::Cleanup)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2260420;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LightTranslationGroupEffect>::get(),
                            "Cleanup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LightTranslationGroupEffect.GetTranslationEventHandler
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::BeatmapDataCallback_1<GlobalNamespace::LightTranslationBeatmapEventData> (GlobalNamespace::LightTranslationGroupEffect::*)(Tweening::FloatTween, UnityEngine::Vector2, UnityEngine::Vector2, bool)>(&GlobalNamespace::LightTranslationGroupEffect::GetTranslationEventHandler)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x2260330;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LightTranslationGroupEffect>::get(),
                            "GetTranslationEventHandler",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Tweening::FloatTween>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LightTranslationGroupEffect.SetTranslation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LightTranslationGroupEffect::*)(float_t)>(&GlobalNamespace::LightTranslationGroupEffect::SetTranslation)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x2260490;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LightTranslationGroupEffect>::get(),
                            "SetTranslation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LightTranslationGroupEffect.SetTweenData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(Tweening::FloatTween, float_t, float_t, float_t, float_t, GlobalNamespace::EaseType)>(&GlobalNamespace::LightTranslationGroupEffect::SetTweenData)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2260658;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LightTranslationGroupEffect>::get(),
                            "SetTweenData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Tweening::FloatTween>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::EaseType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LightTranslationGroupEffect.ComputeTranslation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)(float_t, UnityEngine::Vector2, float_t, UnityEngine::Vector2, bool)>(&GlobalNamespace::LightTranslationGroupEffect::ComputeTranslation)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x2260694;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LightTranslationGroupEffect>::get(),
                            "ComputeTranslation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::LightTranslationGroupEffect::__set__tweeningManager(Tweening::SongTimeTweeningManager value)  {
::cordl_internals::setInstanceField<Tweening::SongTimeTweeningManager, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Tweening::SongTimeTweeningManager>(value));
}
constexpr Tweening::SongTimeTweeningManager GlobalNamespace::LightTranslationGroupEffect::__get__tweeningManager() const {
return ::cordl_internals::getInstanceField<Tweening::SongTimeTweeningManager, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LightTranslationGroupEffect::__set__beatmapCallbacksController(GlobalNamespace::BeatmapCallbacksController value)  {
::cordl_internals::setInstanceField<GlobalNamespace::BeatmapCallbacksController, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::BeatmapCallbacksController>(value));
}
constexpr GlobalNamespace::BeatmapCallbacksController GlobalNamespace::LightTranslationGroupEffect::__get__beatmapCallbacksController() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::BeatmapCallbacksController, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LightTranslationGroupEffect::__set__transformMask(System::Collections::Generic::List_1<System::ValueTuple_2<UnityEngine::Transform,UnityEngine::Vector3>> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<System::ValueTuple_2<UnityEngine::Transform,UnityEngine::Vector3>>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::List_1<System::ValueTuple_2<UnityEngine::Transform,UnityEngine::Vector3>>>(value));
}
constexpr System::Collections::Generic::List_1<System::ValueTuple_2<UnityEngine::Transform,UnityEngine::Vector3>> GlobalNamespace::LightTranslationGroupEffect::__get__transformMask() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<System::ValueTuple_2<UnityEngine::Transform,UnityEngine::Vector3>>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LightTranslationGroupEffect::__set__xTranslationTween(Tweening::FloatTween value)  {
::cordl_internals::setInstanceField<Tweening::FloatTween, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Tweening::FloatTween>(value));
}
constexpr Tweening::FloatTween GlobalNamespace::LightTranslationGroupEffect::__get__xTranslationTween() const {
return ::cordl_internals::getInstanceField<Tweening::FloatTween, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LightTranslationGroupEffect::__set__yTranslationTween(Tweening::FloatTween value)  {
::cordl_internals::setInstanceField<Tweening::FloatTween, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Tweening::FloatTween>(value));
}
constexpr Tweening::FloatTween GlobalNamespace::LightTranslationGroupEffect::__get__yTranslationTween() const {
return ::cordl_internals::getInstanceField<Tweening::FloatTween, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LightTranslationGroupEffect::__set__zTranslationTween(Tweening::FloatTween value)  {
::cordl_internals::setInstanceField<Tweening::FloatTween, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Tweening::FloatTween>(value));
}
constexpr Tweening::FloatTween GlobalNamespace::LightTranslationGroupEffect::__get__zTranslationTween() const {
return ::cordl_internals::getInstanceField<Tweening::FloatTween, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LightTranslationGroupEffect::__set__lightTranslationXBeatmapEventCallbackWrapper(GlobalNamespace::BeatmapDataCallbackWrapper value)  {
::cordl_internals::setInstanceField<GlobalNamespace::BeatmapDataCallbackWrapper, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::BeatmapDataCallbackWrapper>(value));
}
constexpr GlobalNamespace::BeatmapDataCallbackWrapper GlobalNamespace::LightTranslationGroupEffect::__get__lightTranslationXBeatmapEventCallbackWrapper() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::BeatmapDataCallbackWrapper, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LightTranslationGroupEffect::__set__lightTranslationYBeatmapEventCallbackWrapper(GlobalNamespace::BeatmapDataCallbackWrapper value)  {
::cordl_internals::setInstanceField<GlobalNamespace::BeatmapDataCallbackWrapper, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::BeatmapDataCallbackWrapper>(value));
}
constexpr GlobalNamespace::BeatmapDataCallbackWrapper GlobalNamespace::LightTranslationGroupEffect::__get__lightTranslationYBeatmapEventCallbackWrapper() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::BeatmapDataCallbackWrapper, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LightTranslationGroupEffect::__set__lightTranslationZBeatmapEventCallbackWrapper(GlobalNamespace::BeatmapDataCallbackWrapper value)  {
::cordl_internals::setInstanceField<GlobalNamespace::BeatmapDataCallbackWrapper, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::BeatmapDataCallbackWrapper>(value));
}
constexpr GlobalNamespace::BeatmapDataCallbackWrapper GlobalNamespace::LightTranslationGroupEffect::__get__lightTranslationZBeatmapEventCallbackWrapper() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::BeatmapDataCallbackWrapper, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
 GlobalNamespace::LightTranslationGroupEffect GlobalNamespace::LightTranslationGroupEffect::New_ctor(GlobalNamespace::GlobalNamespace__LightTranslationGroupEffect__InitData initData, Tweening::SongTimeTweeningManager tweeningManager, GlobalNamespace::BeatmapCallbacksController beatmapCallbacksController)  {
GlobalNamespace::LightTranslationGroupEffect o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::LightTranslationGroupEffect>(initData, tweeningManager, beatmapCallbacksController))};
return o;
}
 void GlobalNamespace::LightTranslationGroupEffect::_ctor(GlobalNamespace::GlobalNamespace__LightTranslationGroupEffect__InitData initData, Tweening::SongTimeTweeningManager tweeningManager, GlobalNamespace::BeatmapCallbacksController beatmapCallbacksController)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LightTranslationGroupEffect>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__LightTranslationGroupEffect__InitData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Tweening::SongTimeTweeningManager>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::BeatmapCallbacksController>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, initData, tweeningManager, beatmapCallbacksController);
}
 void GlobalNamespace::LightTranslationGroupEffect::Cleanup()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LightTranslationGroupEffect>::get(),
                            "Cleanup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::BeatmapDataCallback_1<GlobalNamespace::LightTranslationBeatmapEventData> GlobalNamespace::LightTranslationGroupEffect::GetTranslationEventHandler(Tweening::FloatTween translationTween, UnityEngine::Vector2 translationLimits, UnityEngine::Vector2 distributionLimits, bool mirrored)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LightTranslationGroupEffect>::get(),
                            "GetTranslationEventHandler",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Tweening::FloatTween>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::BeatmapDataCallback_1<GlobalNamespace::LightTranslationBeatmapEventData>, false>(const_cast<void*>(instance), ___internal_method, translationTween, translationLimits, distributionLimits, mirrored);
}
 void GlobalNamespace::LightTranslationGroupEffect::SetTranslation(float_t _)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LightTranslationGroupEffect>::get(),
                            "SetTranslation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, _);
}
 void GlobalNamespace::LightTranslationGroupEffect::SetTweenData(Tweening::FloatTween tween, float_t from, float_t to, float_t startTime, float_t endTime, GlobalNamespace::EaseType easeType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LightTranslationGroupEffect>::get(),
                            "SetTweenData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Tweening::FloatTween>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::EaseType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, tween, from, to, startTime, endTime, easeType);
}
 float_t GlobalNamespace::LightTranslationGroupEffect::ComputeTranslation(float_t translation, UnityEngine::Vector2 translationLimits, float_t distribution, UnityEngine::Vector2 distributionLimits, bool mirrored)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LightTranslationGroupEffect>::get(),
                            "ComputeTranslation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method, translation, translationLimits, distribution, distributionLimits, mirrored);
}
