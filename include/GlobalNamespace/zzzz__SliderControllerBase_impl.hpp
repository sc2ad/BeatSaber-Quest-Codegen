#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SliderControllerBase_def.hpp"
#include "GlobalNamespace/zzzz__CutoutAnimateEffect_def.hpp"
#include "GlobalNamespace/zzzz__MaterialPropertyBlockController_def.hpp"
//  Writing Method size for method: GlobalNamespace::SliderControllerBase.AnimateCutout
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SliderControllerBase::*)(float_t, float_t, float_t)>(&GlobalNamespace::SliderControllerBase::AnimateCutout)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x223e398;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SliderControllerBase>::get(),
                            "AnimateCutout",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::SliderControllerBase._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SliderControllerBase::*)()>(&GlobalNamespace::SliderControllerBase::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x223e3c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SliderControllerBase>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::SliderControllerBase::__set__materialPropertyBlockController(GlobalNamespace::MaterialPropertyBlockController value)  {
::cordl_internals::setInstanceField<GlobalNamespace::MaterialPropertyBlockController, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::MaterialPropertyBlockController>(value));
}
constexpr GlobalNamespace::MaterialPropertyBlockController GlobalNamespace::SliderControllerBase::__get__materialPropertyBlockController() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::MaterialPropertyBlockController, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::SliderControllerBase::__set__cutoutAnimateEffect(GlobalNamespace::CutoutAnimateEffect value)  {
::cordl_internals::setInstanceField<GlobalNamespace::CutoutAnimateEffect, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::CutoutAnimateEffect>(value));
}
constexpr GlobalNamespace::CutoutAnimateEffect GlobalNamespace::SliderControllerBase::__get__cutoutAnimateEffect() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::CutoutAnimateEffect, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::SliderControllerBase::__set__dissolving(bool value)  {
::cordl_internals::setInstanceField<bool, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::SliderControllerBase::__get__dissolving() const {
return ::cordl_internals::getInstanceField<bool, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::SliderControllerBase::AnimateCutout(float_t cutoutStart, float_t cutoutEnd, float_t duration)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SliderControllerBase>::get(),
                            "AnimateCutout",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, cutoutStart, cutoutEnd, duration);
}
 GlobalNamespace::SliderControllerBase GlobalNamespace::SliderControllerBase::New_ctor()  {
GlobalNamespace::SliderControllerBase o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::SliderControllerBase>())};
return o;
}
 void GlobalNamespace::SliderControllerBase::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::SliderControllerBase>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
