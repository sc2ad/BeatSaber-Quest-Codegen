#pragma once
#include "GlobalNamespace/zzzz__LightColorGroupEffect_impl.hpp"
#include "GlobalNamespace/zzzz__WhiteColorOrAlphaGroupEffect_def.hpp"
#include "GlobalNamespace/zzzz__ColorManager_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "GlobalNamespace/zzzz__LightWithIdManager_def.hpp"
#include "GlobalNamespace/zzzz__IBpmController_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCallbacksController_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentColorType_def.hpp"
#include "Tweening/zzzz__SongTimeTweeningManager_def.hpp"
#include "GlobalNamespace/zzzz__LightColorGroupEffect_def.hpp"
//  Writing Method size for method: GlobalNamespace::WhiteColorOrAlphaGroupEffect._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::WhiteColorOrAlphaGroupEffect::*)(GlobalNamespace::GlobalNamespace__LightColorGroupEffect__InitData, UnityEngine::Color, GlobalNamespace::LightWithIdManager, Tweening::SongTimeTweeningManager, GlobalNamespace::ColorManager, GlobalNamespace::BeatmapCallbacksController, GlobalNamespace::IBpmController)>(&GlobalNamespace::WhiteColorOrAlphaGroupEffect::_ctor)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x225e048;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::WhiteColorOrAlphaGroupEffect>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__LightColorGroupEffect__InitData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::LightWithIdManager>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Tweening::SongTimeTweeningManager>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::ColorManager>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::BeatmapCallbacksController>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IBpmController>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::WhiteColorOrAlphaGroupEffect.GetColor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Color (GlobalNamespace::WhiteColorOrAlphaGroupEffect::*)(GlobalNamespace::EnvironmentColorType, bool, float_t)>(&GlobalNamespace::WhiteColorOrAlphaGroupEffect::GetColor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x225e110;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::WhiteColorOrAlphaGroupEffect),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::WhiteColorOrAlphaGroupEffect>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::WhiteColorOrAlphaGroupEffect::__set__defaultColor(UnityEngine::Color value)  {
::cordl_internals::setInstanceField<UnityEngine::Color, 0x9c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Color>(value));
}
constexpr UnityEngine::Color GlobalNamespace::WhiteColorOrAlphaGroupEffect::__get__defaultColor() const {
return ::cordl_internals::getInstanceField<UnityEngine::Color, 0x9c>(this->::bs_hook::Il2CppWrapperType::instance);
}
 GlobalNamespace::WhiteColorOrAlphaGroupEffect GlobalNamespace::WhiteColorOrAlphaGroupEffect::New_ctor(GlobalNamespace::GlobalNamespace__LightColorGroupEffect__InitData initData, UnityEngine::Color defaultColor, GlobalNamespace::LightWithIdManager lightManager, Tweening::SongTimeTweeningManager tweeningManager, GlobalNamespace::ColorManager colorManager, GlobalNamespace::BeatmapCallbacksController beatmapCallbacksController, GlobalNamespace::IBpmController bpmController)  {
GlobalNamespace::WhiteColorOrAlphaGroupEffect o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::WhiteColorOrAlphaGroupEffect>(initData, defaultColor, lightManager, tweeningManager, colorManager, beatmapCallbacksController, bpmController))};
return o;
}
 void GlobalNamespace::WhiteColorOrAlphaGroupEffect::_ctor(GlobalNamespace::GlobalNamespace__LightColorGroupEffect__InitData initData, UnityEngine::Color defaultColor, GlobalNamespace::LightWithIdManager lightManager, Tweening::SongTimeTweeningManager tweeningManager, GlobalNamespace::ColorManager colorManager, GlobalNamespace::BeatmapCallbacksController beatmapCallbacksController, GlobalNamespace::IBpmController bpmController)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::WhiteColorOrAlphaGroupEffect>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__LightColorGroupEffect__InitData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::LightWithIdManager>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Tweening::SongTimeTweeningManager>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::ColorManager>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::BeatmapCallbacksController>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::IBpmController>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, initData, defaultColor, lightManager, tweeningManager, colorManager, beatmapCallbacksController, bpmController);
}
 UnityEngine::Color GlobalNamespace::WhiteColorOrAlphaGroupEffect::GetColor(GlobalNamespace::EnvironmentColorType colorType, bool colorBoost, float_t brightness)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::WhiteColorOrAlphaGroupEffect>::get(),
                            "GetColor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::EnvironmentColorType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Color, false>(const_cast<void*>(instance), ___internal_method, colorType, colorBoost, brightness);
}
