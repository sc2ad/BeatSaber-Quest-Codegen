#pragma once
namespace {
#include "GlobalNamespace/zzzz__BufferedLightColorGroupEffect_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentColorType_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCallbacksController_def.hpp"
#include "GlobalNamespace/zzzz__MaterialPropertyBlockController_def.hpp"
#include "GlobalNamespace/zzzz__ColorManager_def.hpp"
#include "GlobalNamespace/zzzz__LightColorBeatmapEventData_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataCallbackWrapper_def.hpp"
#include "GlobalNamespace/zzzz__ColorBoostBeatmapEventData_def.hpp"
#include "GlobalNamespace/zzzz__LightGroup_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::____GlobalNamespace__BufferedLightColorGroupEffect__InitData._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::____GlobalNamespace__BufferedLightColorGroupEffect__InitData::*)(::GlobalNamespace::LightGroup, ::GlobalNamespace::MaterialPropertyBlockController)>(&::GlobalNamespace::____GlobalNamespace__BufferedLightColorGroupEffect__InitData::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x225c99c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__BufferedLightColorGroupEffect__InitData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LightGroup>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MaterialPropertyBlockController>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::____GlobalNamespace__BufferedLightColorGroupEffect__InitData::__set_lightGroup(::GlobalNamespace::LightGroup value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::LightGroup, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::LightGroup>(value));
}
constexpr ::GlobalNamespace::LightGroup ::GlobalNamespace::____GlobalNamespace__BufferedLightColorGroupEffect__InitData::__get_lightGroup() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::LightGroup, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::____GlobalNamespace__BufferedLightColorGroupEffect__InitData::__set_materialPropertyBlockController(::GlobalNamespace::MaterialPropertyBlockController value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::MaterialPropertyBlockController, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::MaterialPropertyBlockController>(value));
}
constexpr ::GlobalNamespace::MaterialPropertyBlockController ::GlobalNamespace::____GlobalNamespace__BufferedLightColorGroupEffect__InitData::__get_materialPropertyBlockController() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MaterialPropertyBlockController, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "lightGroup", ty: "::GlobalNamespace::LightGroup", modifiers: "", def_value: None }, CppParam { name: "materialPropertyBlockController", ty: "::GlobalNamespace::MaterialPropertyBlockController", modifiers: "", def_value: None }]
 ::GlobalNamespace::____GlobalNamespace__BufferedLightColorGroupEffect__InitData::____GlobalNamespace__BufferedLightColorGroupEffect__InitData(::GlobalNamespace::LightGroup lightGroup, ::GlobalNamespace::MaterialPropertyBlockController materialPropertyBlockController)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____GlobalNamespace__BufferedLightColorGroupEffect__InitData>(lightGroup, materialPropertyBlockController))) {}
 void ::GlobalNamespace::____GlobalNamespace__BufferedLightColorGroupEffect__InitData::_ctor(::GlobalNamespace::LightGroup lightGroup, ::GlobalNamespace::MaterialPropertyBlockController materialPropertyBlockController)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::____GlobalNamespace__BufferedLightColorGroupEffect__InitData>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LightGroup>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MaterialPropertyBlockController>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, lightGroup, materialPropertyBlockController);
}
//  Writing Method size for method: ::GlobalNamespace::BufferedLightColorGroupEffect._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BufferedLightColorGroupEffect::*)(::GlobalNamespace::____GlobalNamespace__BufferedLightColorGroupEffect__InitData, ::GlobalNamespace::ColorManager, ::GlobalNamespace::BeatmapCallbacksController)>(&::GlobalNamespace::BufferedLightColorGroupEffect::_ctor)> {
  constexpr static std::size_t size = 0x348;
  constexpr static std::size_t addrs = 0x225c23c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BufferedLightColorGroupEffect>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__BufferedLightColorGroupEffect__InitData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ColorManager>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapCallbacksController>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BufferedLightColorGroupEffect.Cleanup
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BufferedLightColorGroupEffect::*)()>(&::GlobalNamespace::BufferedLightColorGroupEffect::Cleanup)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x225c584;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BufferedLightColorGroupEffect>::get(),
                            "Cleanup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BufferedLightColorGroupEffect.HandleColorBoostBeatmapEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BufferedLightColorGroupEffect::*)(::GlobalNamespace::ColorBoostBeatmapEventData)>(&::GlobalNamespace::BufferedLightColorGroupEffect::HandleColorBoostBeatmapEvent)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x225c6a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BufferedLightColorGroupEffect>::get(),
                            "HandleColorBoostBeatmapEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ColorBoostBeatmapEventData>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BufferedLightColorGroupEffect.HandleColorChangeBeatmapEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BufferedLightColorGroupEffect::*)(::GlobalNamespace::LightColorBeatmapEventData)>(&::GlobalNamespace::BufferedLightColorGroupEffect::HandleColorChangeBeatmapEvent)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x225c6bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BufferedLightColorGroupEffect>::get(),
                            "HandleColorChangeBeatmapEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LightColorBeatmapEventData>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BufferedLightColorGroupEffect.HandleBeatmapCallbacksControllerDidProcessAllCallbacksThisFrame
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BufferedLightColorGroupEffect::*)()>(&::GlobalNamespace::BufferedLightColorGroupEffect::HandleBeatmapCallbacksControllerDidProcessAllCallbacksThisFrame)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x225c798;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BufferedLightColorGroupEffect>::get(),
                            "HandleBeatmapCallbacksControllerDidProcessAllCallbacksThisFrame",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BufferedLightColorGroupEffect.GetColor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (::GlobalNamespace::BufferedLightColorGroupEffect::*)(::GlobalNamespace::EnvironmentColorType, bool, float_t)>(&::GlobalNamespace::BufferedLightColorGroupEffect::GetColor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x225c8a0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::BufferedLightColorGroupEffect),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BufferedLightColorGroupEffect>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::BufferedLightColorGroupEffect::__set__colorManager(::GlobalNamespace::ColorManager value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::ColorManager, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::ColorManager>(value));
}
constexpr ::GlobalNamespace::ColorManager ::GlobalNamespace::BufferedLightColorGroupEffect::__get__colorManager() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::ColorManager, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::BufferedLightColorGroupEffect::__set__materialPropertyBlockController(::GlobalNamespace::MaterialPropertyBlockController value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::MaterialPropertyBlockController, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::MaterialPropertyBlockController>(value));
}
constexpr ::GlobalNamespace::MaterialPropertyBlockController ::GlobalNamespace::BufferedLightColorGroupEffect::__get__materialPropertyBlockController() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MaterialPropertyBlockController, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::BufferedLightColorGroupEffect::__set__beatmapCallbacksController(::GlobalNamespace::BeatmapCallbacksController value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BeatmapCallbacksController, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::BeatmapCallbacksController>(value));
}
constexpr ::GlobalNamespace::BeatmapCallbacksController ::GlobalNamespace::BufferedLightColorGroupEffect::__get__beatmapCallbacksController() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapCallbacksController, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::BufferedLightColorGroupEffect::__set__colorBoostBeatmapDataCallbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::BeatmapDataCallbackWrapper, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::BeatmapDataCallbackWrapper>(value));
}
constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper ::GlobalNamespace::BufferedLightColorGroupEffect::__get__colorBoostBeatmapDataCallbackWrapper() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::BeatmapDataCallbackWrapper, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::BufferedLightColorGroupEffect::__set__lightColorBeatmapEventCallbackWrappers(::ArrayW<::GlobalNamespace::BeatmapDataCallbackWrapper> value)  {
::cordl_internals::setInstanceField<::ArrayW<::GlobalNamespace::BeatmapDataCallbackWrapper>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::GlobalNamespace::BeatmapDataCallbackWrapper>>(value));
}
constexpr ::ArrayW<::GlobalNamespace::BeatmapDataCallbackWrapper> ::GlobalNamespace::BufferedLightColorGroupEffect::__get__lightColorBeatmapEventCallbackWrappers() const {
return ::cordl_internals::getInstanceField<::ArrayW<::GlobalNamespace::BeatmapDataCallbackWrapper>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::BufferedLightColorGroupEffect::__set__lastIndex(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::BufferedLightColorGroupEffect::__get__lastIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::BufferedLightColorGroupEffect::__set__timesBuffer(::ArrayW<float_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<float_t>, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<float_t>>(value));
}
constexpr ::ArrayW<float_t> ::GlobalNamespace::BufferedLightColorGroupEffect::__get__timesBuffer() const {
return ::cordl_internals::getInstanceField<::ArrayW<float_t>, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::BufferedLightColorGroupEffect::__set__colorsBuffer(::ArrayW<::UnityEngine::Vector4> value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::Vector4>, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::UnityEngine::Vector4>>(value));
}
constexpr ::ArrayW<::UnityEngine::Vector4> ::GlobalNamespace::BufferedLightColorGroupEffect::__get__colorsBuffer() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::Vector4>, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::BufferedLightColorGroupEffect::__set__elementIdsBuffer(::ArrayW<float_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<float_t>, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<float_t>>(value));
}
constexpr ::ArrayW<float_t> ::GlobalNamespace::BufferedLightColorGroupEffect::__get__elementIdsBuffer() const {
return ::cordl_internals::getInstanceField<::ArrayW<float_t>, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::BufferedLightColorGroupEffect::__set__useBoostColors(bool value)  {
::cordl_internals::setInstanceField<bool, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::GlobalNamespace::BufferedLightColorGroupEffect::__get__useBoostColors() const {
return ::cordl_internals::getInstanceField<bool, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::BufferedLightColorGroupEffect::__set__didReceiveEventThisFrame(bool value)  {
::cordl_internals::setInstanceField<bool, 0x59>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::GlobalNamespace::BufferedLightColorGroupEffect::__get__didReceiveEventThisFrame() const {
return ::cordl_internals::getInstanceField<bool, 0x59>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void ::GlobalNamespace::BufferedLightColorGroupEffect::__set__timesBufferPropertyId(int32_t value)  {
::cordl_internals::setStaticField<int32_t, "_timesBufferPropertyId", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BufferedLightColorGroupEffect>::get>(std::forward<int32_t>(value));
}
 int32_t ::GlobalNamespace::BufferedLightColorGroupEffect::__get__timesBufferPropertyId()  {
return ::cordl_internals::getStaticField<int32_t, "_timesBufferPropertyId", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BufferedLightColorGroupEffect>::get>();
}
 void ::GlobalNamespace::BufferedLightColorGroupEffect::__set__colorBufferPropertyId(int32_t value)  {
::cordl_internals::setStaticField<int32_t, "_colorBufferPropertyId", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BufferedLightColorGroupEffect>::get>(std::forward<int32_t>(value));
}
 int32_t ::GlobalNamespace::BufferedLightColorGroupEffect::__get__colorBufferPropertyId()  {
return ::cordl_internals::getStaticField<int32_t, "_colorBufferPropertyId", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BufferedLightColorGroupEffect>::get>();
}
 void ::GlobalNamespace::BufferedLightColorGroupEffect::__set__elementIdBufferPropertyId(int32_t value)  {
::cordl_internals::setStaticField<int32_t, "_elementIdBufferPropertyId", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BufferedLightColorGroupEffect>::get>(std::forward<int32_t>(value));
}
 int32_t ::GlobalNamespace::BufferedLightColorGroupEffect::__get__elementIdBufferPropertyId()  {
return ::cordl_internals::getStaticField<int32_t, "_elementIdBufferPropertyId", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BufferedLightColorGroupEffect>::get>();
}
// Ctor Parameters [CppParam { name: "initData", ty: "::GlobalNamespace::____GlobalNamespace__BufferedLightColorGroupEffect__InitData", modifiers: "", def_value: None }, CppParam { name: "colorManager", ty: "::GlobalNamespace::ColorManager", modifiers: "", def_value: None }, CppParam { name: "beatmapCallbacksController", ty: "::GlobalNamespace::BeatmapCallbacksController", modifiers: "", def_value: None }]
 ::GlobalNamespace::BufferedLightColorGroupEffect::BufferedLightColorGroupEffect(::GlobalNamespace::____GlobalNamespace__BufferedLightColorGroupEffect__InitData initData, ::GlobalNamespace::ColorManager colorManager, ::GlobalNamespace::BeatmapCallbacksController beatmapCallbacksController)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<BufferedLightColorGroupEffect>(initData, colorManager, beatmapCallbacksController))) {}
 void ::GlobalNamespace::BufferedLightColorGroupEffect::_ctor(::GlobalNamespace::____GlobalNamespace__BufferedLightColorGroupEffect__InitData initData, ::GlobalNamespace::ColorManager colorManager, ::GlobalNamespace::BeatmapCallbacksController beatmapCallbacksController)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BufferedLightColorGroupEffect>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::____GlobalNamespace__BufferedLightColorGroupEffect__InitData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ColorManager>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapCallbacksController>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, initData, colorManager, beatmapCallbacksController);
}
 void ::GlobalNamespace::BufferedLightColorGroupEffect::Cleanup()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BufferedLightColorGroupEffect>::get(),
                            "Cleanup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::BufferedLightColorGroupEffect::HandleColorBoostBeatmapEvent(::GlobalNamespace::ColorBoostBeatmapEventData colorBoost)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BufferedLightColorGroupEffect>::get(),
                            "HandleColorBoostBeatmapEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ColorBoostBeatmapEventData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, colorBoost);
}
 void ::GlobalNamespace::BufferedLightColorGroupEffect::HandleColorChangeBeatmapEvent(::GlobalNamespace::LightColorBeatmapEventData currentEvent)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BufferedLightColorGroupEffect>::get(),
                            "HandleColorChangeBeatmapEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LightColorBeatmapEventData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, currentEvent);
}
 void ::GlobalNamespace::BufferedLightColorGroupEffect::HandleBeatmapCallbacksControllerDidProcessAllCallbacksThisFrame()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BufferedLightColorGroupEffect>::get(),
                            "HandleBeatmapCallbacksControllerDidProcessAllCallbacksThisFrame",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::UnityEngine::Color ::GlobalNamespace::BufferedLightColorGroupEffect::GetColor(::GlobalNamespace::EnvironmentColorType colorType, bool colorBoost, float_t brightness)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BufferedLightColorGroupEffect>::get(),
                            "GetColor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EnvironmentColorType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color, false>(const_cast<void*>(instance), ___internal_method, colorType, colorBoost, brightness);
}
} // end anonymous namespace
