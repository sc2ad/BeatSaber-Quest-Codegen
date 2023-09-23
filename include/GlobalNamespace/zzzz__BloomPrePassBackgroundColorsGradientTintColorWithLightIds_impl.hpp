#pragma once
#include "GlobalNamespace/zzzz__LightWithIdMonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__BloomPrePassBackgroundColorsGradientTintColorWithLightIds_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "GlobalNamespace/zzzz__BloomPrePassBackgroundColorsGradient_def.hpp"
//  Writing Method size for method: GlobalNamespace::BloomPrePassBackgroundColorsGradientTintColorWithLightIds.ColorWasSet
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BloomPrePassBackgroundColorsGradientTintColorWithLightIds::*)(UnityEngine::Color)>(&GlobalNamespace::BloomPrePassBackgroundColorsGradientTintColorWithLightIds::ColorWasSet)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1f9c58c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::BloomPrePassBackgroundColorsGradientTintColorWithLightIds),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BloomPrePassBackgroundColorsGradientTintColorWithLightIds>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BloomPrePassBackgroundColorsGradientTintColorWithLightIds._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BloomPrePassBackgroundColorsGradientTintColorWithLightIds::*)()>(&GlobalNamespace::BloomPrePassBackgroundColorsGradientTintColorWithLightIds::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1f9c5ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BloomPrePassBackgroundColorsGradientTintColorWithLightIds>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::BloomPrePassBackgroundColorsGradientTintColorWithLightIds::__set__bloomPrePassBackgroundColorsGradient(GlobalNamespace::BloomPrePassBackgroundColorsGradient value)  {
::cordl_internals::setInstanceField<GlobalNamespace::BloomPrePassBackgroundColorsGradient, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::BloomPrePassBackgroundColorsGradient>(value));
}
constexpr GlobalNamespace::BloomPrePassBackgroundColorsGradient GlobalNamespace::BloomPrePassBackgroundColorsGradientTintColorWithLightIds::__get__bloomPrePassBackgroundColorsGradient() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::BloomPrePassBackgroundColorsGradient, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::BloomPrePassBackgroundColorsGradientTintColorWithLightIds::ColorWasSet(UnityEngine::Color color)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BloomPrePassBackgroundColorsGradientTintColorWithLightIds>::get(),
                            "ColorWasSet",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Color>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, color);
}
// Ctor Parameters []
 GlobalNamespace::BloomPrePassBackgroundColorsGradientTintColorWithLightIds::BloomPrePassBackgroundColorsGradientTintColorWithLightIds()  : GlobalNamespace::LightWithIdMonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<BloomPrePassBackgroundColorsGradientTintColorWithLightIds>())) {}
 void GlobalNamespace::BloomPrePassBackgroundColorsGradientTintColorWithLightIds::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BloomPrePassBackgroundColorsGradientTintColorWithLightIds>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
