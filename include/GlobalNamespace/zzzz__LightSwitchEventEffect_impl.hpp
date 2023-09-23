#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__LightSwitchEventEffect_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "GlobalNamespace/zzzz__BasicBeatmapEventData_def.hpp"
#include "GlobalNamespace/zzzz__LightWithIdManager_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataCallbackWrapper_def.hpp"
#include "Tweening/zzzz__ColorTween_def.hpp"
#include "GlobalNamespace/zzzz__ColorSO_def.hpp"
#include "GlobalNamespace/zzzz__ColorBoostBeatmapEventData_def.hpp"
#include "Tweening/zzzz__SongTimeTweeningManager_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCallbacksController_def.hpp"
#include "GlobalNamespace/zzzz__BasicBeatmapEventType_def.hpp"
#include "GlobalNamespace/zzzz__ColorManager_def.hpp"
//  Writing Method size for method: GlobalNamespace::LightSwitchEventEffect.get_lightsId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (GlobalNamespace::LightSwitchEventEffect::*)()>(&GlobalNamespace::LightSwitchEventEffect::get_lightsId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2263778;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LightSwitchEventEffect>::get(),
                            "get_lightsId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LightSwitchEventEffect.get_eventType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::BasicBeatmapEventType (GlobalNamespace::LightSwitchEventEffect::*)()>(&GlobalNamespace::LightSwitchEventEffect::get_eventType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2263780;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LightSwitchEventEffect>::get(),
                            "get_eventType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LightSwitchEventEffect.Awake
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LightSwitchEventEffect::*)()>(&GlobalNamespace::LightSwitchEventEffect::Awake)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x2263788;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LightSwitchEventEffect>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LightSwitchEventEffect.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LightSwitchEventEffect::*)()>(&GlobalNamespace::LightSwitchEventEffect::Start)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x226398c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LightSwitchEventEffect>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LightSwitchEventEffect.OnDestroy
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LightSwitchEventEffect::*)()>(&GlobalNamespace::LightSwitchEventEffect::OnDestroy)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2263b4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LightSwitchEventEffect>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LightSwitchEventEffect.HandleColorChangeBeatmapEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LightSwitchEventEffect::*)(GlobalNamespace::BasicBeatmapEventData)>(&GlobalNamespace::LightSwitchEventEffect::HandleColorChangeBeatmapEvent)> {
  constexpr static std::size_t size = 0x348;
  constexpr static std::size_t addrs = 0x2263bfc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LightSwitchEventEffect>::get(),
                            "HandleColorChangeBeatmapEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::BasicBeatmapEventData>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LightSwitchEventEffect.HandleColorBoostBeatmapEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LightSwitchEventEffect::*)(GlobalNamespace::ColorBoostBeatmapEventData)>(&GlobalNamespace::LightSwitchEventEffect::HandleColorBoostBeatmapEvent)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x22642b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LightSwitchEventEffect>::get(),
                            "HandleColorBoostBeatmapEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::ColorBoostBeatmapEventData>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LightSwitchEventEffect.SetupTweenAndSaveOtherColors
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LightSwitchEventEffect::*)(UnityEngine::Color, UnityEngine::Color, UnityEngine::Color, UnityEngine::Color)>(&GlobalNamespace::LightSwitchEventEffect::SetupTweenAndSaveOtherColors)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x2263954;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LightSwitchEventEffect>::get(),
                            "SetupTweenAndSaveOtherColors",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Color>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LightSwitchEventEffect.CheckNextEventForFade
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LightSwitchEventEffect::*)(GlobalNamespace::BasicBeatmapEventData)>(&GlobalNamespace::LightSwitchEventEffect::CheckNextEventForFade)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x2263f68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LightSwitchEventEffect>::get(),
                            "CheckNextEventForFade",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::BasicBeatmapEventData>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LightSwitchEventEffect.GetNormalColor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Color (GlobalNamespace::LightSwitchEventEffect::*)(int32_t, bool)>(&GlobalNamespace::LightSwitchEventEffect::GetNormalColor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2264180;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LightSwitchEventEffect>::get(),
                            "GetNormalColor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LightSwitchEventEffect.GetHighlightColor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Color (GlobalNamespace::LightSwitchEventEffect::*)(int32_t, bool)>(&GlobalNamespace::LightSwitchEventEffect::GetHighlightColor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x226421c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LightSwitchEventEffect>::get(),
                            "GetHighlightColor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LightSwitchEventEffect.SetColor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LightSwitchEventEffect::*)(UnityEngine::Color)>(&GlobalNamespace::LightSwitchEventEffect::SetColor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2263f44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LightSwitchEventEffect>::get(),
                            "SetColor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Color>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::LightSwitchEventEffect._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LightSwitchEventEffect::*)()>(&GlobalNamespace::LightSwitchEventEffect::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2264384;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LightSwitchEventEffect>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::LightSwitchEventEffect::__set__lightColor0(GlobalNamespace::ColorSO value)  {
::cordl_internals::setInstanceField<GlobalNamespace::ColorSO, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::ColorSO>(value));
}
constexpr GlobalNamespace::ColorSO GlobalNamespace::LightSwitchEventEffect::__get__lightColor0() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::ColorSO, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LightSwitchEventEffect::__set__lightColor1(GlobalNamespace::ColorSO value)  {
::cordl_internals::setInstanceField<GlobalNamespace::ColorSO, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::ColorSO>(value));
}
constexpr GlobalNamespace::ColorSO GlobalNamespace::LightSwitchEventEffect::__get__lightColor1() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::ColorSO, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LightSwitchEventEffect::__set__highlightColor0(GlobalNamespace::ColorSO value)  {
::cordl_internals::setInstanceField<GlobalNamespace::ColorSO, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::ColorSO>(value));
}
constexpr GlobalNamespace::ColorSO GlobalNamespace::LightSwitchEventEffect::__get__highlightColor0() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::ColorSO, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LightSwitchEventEffect::__set__highlightColor1(GlobalNamespace::ColorSO value)  {
::cordl_internals::setInstanceField<GlobalNamespace::ColorSO, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::ColorSO>(value));
}
constexpr GlobalNamespace::ColorSO GlobalNamespace::LightSwitchEventEffect::__get__highlightColor1() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::ColorSO, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LightSwitchEventEffect::__set__lightColor0Boost(GlobalNamespace::ColorSO value)  {
::cordl_internals::setInstanceField<GlobalNamespace::ColorSO, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::ColorSO>(value));
}
constexpr GlobalNamespace::ColorSO GlobalNamespace::LightSwitchEventEffect::__get__lightColor0Boost() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::ColorSO, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LightSwitchEventEffect::__set__lightColor1Boost(GlobalNamespace::ColorSO value)  {
::cordl_internals::setInstanceField<GlobalNamespace::ColorSO, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::ColorSO>(value));
}
constexpr GlobalNamespace::ColorSO GlobalNamespace::LightSwitchEventEffect::__get__lightColor1Boost() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::ColorSO, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LightSwitchEventEffect::__set__highlightColor0Boost(GlobalNamespace::ColorSO value)  {
::cordl_internals::setInstanceField<GlobalNamespace::ColorSO, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::ColorSO>(value));
}
constexpr GlobalNamespace::ColorSO GlobalNamespace::LightSwitchEventEffect::__get__highlightColor0Boost() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::ColorSO, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LightSwitchEventEffect::__set__highlightColor1Boost(GlobalNamespace::ColorSO value)  {
::cordl_internals::setInstanceField<GlobalNamespace::ColorSO, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::ColorSO>(value));
}
constexpr GlobalNamespace::ColorSO GlobalNamespace::LightSwitchEventEffect::__get__highlightColor1Boost() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::ColorSO, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LightSwitchEventEffect::__set__offColorIntensity(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::LightSwitchEventEffect::__get__offColorIntensity() const {
return ::cordl_internals::getInstanceField<float_t, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LightSwitchEventEffect::__set__lightOnStart(bool value)  {
::cordl_internals::setInstanceField<bool, 0x5c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::LightSwitchEventEffect::__get__lightOnStart() const {
return ::cordl_internals::getInstanceField<bool, 0x5c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LightSwitchEventEffect::__set__lightsID(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::LightSwitchEventEffect::__get__lightsID() const {
return ::cordl_internals::getInstanceField<int32_t, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LightSwitchEventEffect::__set__event(GlobalNamespace::BasicBeatmapEventType value)  {
::cordl_internals::setInstanceField<GlobalNamespace::BasicBeatmapEventType, 0x64>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::BasicBeatmapEventType>(value));
}
constexpr GlobalNamespace::BasicBeatmapEventType GlobalNamespace::LightSwitchEventEffect::__get__event() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::BasicBeatmapEventType, 0x64>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LightSwitchEventEffect::__set__lightManager(GlobalNamespace::LightWithIdManager value)  {
::cordl_internals::setInstanceField<GlobalNamespace::LightWithIdManager, 0x68>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::LightWithIdManager>(value));
}
constexpr GlobalNamespace::LightWithIdManager GlobalNamespace::LightSwitchEventEffect::__get__lightManager() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::LightWithIdManager, 0x68>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LightSwitchEventEffect::__set__beatmapCallbacksController(GlobalNamespace::BeatmapCallbacksController value)  {
::cordl_internals::setInstanceField<GlobalNamespace::BeatmapCallbacksController, 0x70>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::BeatmapCallbacksController>(value));
}
constexpr GlobalNamespace::BeatmapCallbacksController GlobalNamespace::LightSwitchEventEffect::__get__beatmapCallbacksController() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::BeatmapCallbacksController, 0x70>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LightSwitchEventEffect::__set__tweeningManager(Tweening::SongTimeTweeningManager value)  {
::cordl_internals::setInstanceField<Tweening::SongTimeTweeningManager, 0x78>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Tweening::SongTimeTweeningManager>(value));
}
constexpr Tweening::SongTimeTweeningManager GlobalNamespace::LightSwitchEventEffect::__get__tweeningManager() const {
return ::cordl_internals::getInstanceField<Tweening::SongTimeTweeningManager, 0x78>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LightSwitchEventEffect::__set__colorManager(GlobalNamespace::ColorManager value)  {
::cordl_internals::setInstanceField<GlobalNamespace::ColorManager, 0x80>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::ColorManager>(value));
}
constexpr GlobalNamespace::ColorManager GlobalNamespace::LightSwitchEventEffect::__get__colorManager() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::ColorManager, 0x80>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LightSwitchEventEffect::__set__colorTween(Tweening::ColorTween value)  {
::cordl_internals::setInstanceField<Tweening::ColorTween, 0x88>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Tweening::ColorTween>(value));
}
constexpr Tweening::ColorTween GlobalNamespace::LightSwitchEventEffect::__get__colorTween() const {
return ::cordl_internals::getInstanceField<Tweening::ColorTween, 0x88>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LightSwitchEventEffect::__set__alternativeFromColor(UnityEngine::Color value)  {
::cordl_internals::setInstanceField<UnityEngine::Color, 0x90>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Color>(value));
}
constexpr UnityEngine::Color GlobalNamespace::LightSwitchEventEffect::__get__alternativeFromColor() const {
return ::cordl_internals::getInstanceField<UnityEngine::Color, 0x90>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LightSwitchEventEffect::__set__alternativeToColor(UnityEngine::Color value)  {
::cordl_internals::setInstanceField<UnityEngine::Color, 0xa0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Color>(value));
}
constexpr UnityEngine::Color GlobalNamespace::LightSwitchEventEffect::__get__alternativeToColor() const {
return ::cordl_internals::getInstanceField<UnityEngine::Color, 0xa0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LightSwitchEventEffect::__set__usingBoostColors(bool value)  {
::cordl_internals::setInstanceField<bool, 0xb0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::LightSwitchEventEffect::__get__usingBoostColors() const {
return ::cordl_internals::getInstanceField<bool, 0xb0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LightSwitchEventEffect::__set__colorChangeBeatmapDataCallbackWrapper(GlobalNamespace::BeatmapDataCallbackWrapper value)  {
::cordl_internals::setInstanceField<GlobalNamespace::BeatmapDataCallbackWrapper, 0xb8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::BeatmapDataCallbackWrapper>(value));
}
constexpr GlobalNamespace::BeatmapDataCallbackWrapper GlobalNamespace::LightSwitchEventEffect::__get__colorChangeBeatmapDataCallbackWrapper() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::BeatmapDataCallbackWrapper, 0xb8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::LightSwitchEventEffect::__set__colorBoostBeatmapDataCallbackWrapper(GlobalNamespace::BeatmapDataCallbackWrapper value)  {
::cordl_internals::setInstanceField<GlobalNamespace::BeatmapDataCallbackWrapper, 0xc0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::BeatmapDataCallbackWrapper>(value));
}
constexpr GlobalNamespace::BeatmapDataCallbackWrapper GlobalNamespace::LightSwitchEventEffect::__get__colorBoostBeatmapDataCallbackWrapper() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::BeatmapDataCallbackWrapper, 0xc0>(this->::bs_hook::Il2CppWrapperType::instance);
}
 int32_t GlobalNamespace::LightSwitchEventEffect::get_lightsId()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LightSwitchEventEffect>::get(),
                            "get_lightsId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(const_cast<void*>(instance), ___internal_method);
}
 GlobalNamespace::BasicBeatmapEventType GlobalNamespace::LightSwitchEventEffect::get_eventType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LightSwitchEventEffect>::get(),
                            "get_eventType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::BasicBeatmapEventType, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::LightSwitchEventEffect::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LightSwitchEventEffect>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::LightSwitchEventEffect::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LightSwitchEventEffect>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::LightSwitchEventEffect::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LightSwitchEventEffect>::get(),
                            "OnDestroy",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::LightSwitchEventEffect::HandleColorChangeBeatmapEvent(GlobalNamespace::BasicBeatmapEventData basicBeatmapEventData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LightSwitchEventEffect>::get(),
                            "HandleColorChangeBeatmapEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::BasicBeatmapEventData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, basicBeatmapEventData);
}
 void GlobalNamespace::LightSwitchEventEffect::HandleColorBoostBeatmapEvent(GlobalNamespace::ColorBoostBeatmapEventData eventData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LightSwitchEventEffect>::get(),
                            "HandleColorBoostBeatmapEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::ColorBoostBeatmapEventData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, eventData);
}
 void GlobalNamespace::LightSwitchEventEffect::SetupTweenAndSaveOtherColors(UnityEngine::Color fromColor, UnityEngine::Color toColor, UnityEngine::Color alternativeFromColor, UnityEngine::Color alternativeToColor)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LightSwitchEventEffect>::get(),
                            "SetupTweenAndSaveOtherColors",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Color>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, fromColor, toColor, alternativeFromColor, alternativeToColor);
}
 void GlobalNamespace::LightSwitchEventEffect::CheckNextEventForFade(GlobalNamespace::BasicBeatmapEventData basicBeatmapEventData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LightSwitchEventEffect>::get(),
                            "CheckNextEventForFade",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::BasicBeatmapEventData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, basicBeatmapEventData);
}
 UnityEngine::Color GlobalNamespace::LightSwitchEventEffect::GetNormalColor(int32_t beatmapEventValue, bool colorBoost)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LightSwitchEventEffect>::get(),
                            "GetNormalColor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Color, false>(const_cast<void*>(instance), ___internal_method, beatmapEventValue, colorBoost);
}
 UnityEngine::Color GlobalNamespace::LightSwitchEventEffect::GetHighlightColor(int32_t beatmapEventValue, bool colorBoost)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LightSwitchEventEffect>::get(),
                            "GetHighlightColor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Color, false>(const_cast<void*>(instance), ___internal_method, beatmapEventValue, colorBoost);
}
 void GlobalNamespace::LightSwitchEventEffect::SetColor(UnityEngine::Color color)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LightSwitchEventEffect>::get(),
                            "SetColor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Color>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, color);
}
// Ctor Parameters []
 GlobalNamespace::LightSwitchEventEffect::LightSwitchEventEffect()  : UnityEngine::MonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<LightSwitchEventEffect>())) {}
 void GlobalNamespace::LightSwitchEventEffect::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::LightSwitchEventEffect>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
