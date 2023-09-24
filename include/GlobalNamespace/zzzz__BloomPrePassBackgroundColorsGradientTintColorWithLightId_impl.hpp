#pragma once
#include "GlobalNamespace/zzzz__RuntimeLightWithIds_impl.hpp"
#include "GlobalNamespace/zzzz__BloomPrePassBackgroundColorsGradientTintColorWithLightId_def.hpp"
#include "GlobalNamespace/zzzz__BloomPrePassBackgroundColorsGradient_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
//  Writing Method size for method: GlobalNamespace::BloomPrePassBackgroundColorsGradientTintColorWithLightId.ColorWasSet
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BloomPrePassBackgroundColorsGradientTintColorWithLightId::*)(UnityEngine::Color)>(&GlobalNamespace::BloomPrePassBackgroundColorsGradientTintColorWithLightId::ColorWasSet)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1f9c4ec;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::BloomPrePassBackgroundColorsGradientTintColorWithLightId),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BloomPrePassBackgroundColorsGradientTintColorWithLightId>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::BloomPrePassBackgroundColorsGradientTintColorWithLightId._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BloomPrePassBackgroundColorsGradientTintColorWithLightId::*)()>(&GlobalNamespace::BloomPrePassBackgroundColorsGradientTintColorWithLightId::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x1f9c55c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BloomPrePassBackgroundColorsGradientTintColorWithLightId>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::BloomPrePassBackgroundColorsGradientTintColorWithLightId::__set__bloomPrePassBackgroundColorsGradient(GlobalNamespace::BloomPrePassBackgroundColorsGradient value)  {
::cordl_internals::setInstanceField<GlobalNamespace::BloomPrePassBackgroundColorsGradient, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::BloomPrePassBackgroundColorsGradient>(value));
}
constexpr GlobalNamespace::BloomPrePassBackgroundColorsGradient GlobalNamespace::BloomPrePassBackgroundColorsGradientTintColorWithLightId::__get__bloomPrePassBackgroundColorsGradient() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::BloomPrePassBackgroundColorsGradient, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::BloomPrePassBackgroundColorsGradientTintColorWithLightId::__set__useGrayscale(bool value)  {
::cordl_internals::setInstanceField<bool, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::BloomPrePassBackgroundColorsGradientTintColorWithLightId::__get__useGrayscale() const {
return ::cordl_internals::getInstanceField<bool, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::BloomPrePassBackgroundColorsGradientTintColorWithLightId::__set_grayscaleFactor(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x54>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::BloomPrePassBackgroundColorsGradientTintColorWithLightId::__get_grayscaleFactor() const {
return ::cordl_internals::getInstanceField<float_t, 0x54>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::BloomPrePassBackgroundColorsGradientTintColorWithLightId::ColorWasSet(UnityEngine::Color color)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BloomPrePassBackgroundColorsGradientTintColorWithLightId>::get(),
                            "ColorWasSet",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Color>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, color);
}
 GlobalNamespace::BloomPrePassBackgroundColorsGradientTintColorWithLightId GlobalNamespace::BloomPrePassBackgroundColorsGradientTintColorWithLightId::New_ctor()  {
GlobalNamespace::BloomPrePassBackgroundColorsGradientTintColorWithLightId o{THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace::BloomPrePassBackgroundColorsGradientTintColorWithLightId>())};
return o;
}
 void GlobalNamespace::BloomPrePassBackgroundColorsGradientTintColorWithLightId::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::BloomPrePassBackgroundColorsGradientTintColorWithLightId>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
