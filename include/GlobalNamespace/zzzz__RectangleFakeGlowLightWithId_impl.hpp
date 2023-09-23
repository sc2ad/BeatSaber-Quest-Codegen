#pragma once
#include "GlobalNamespace/zzzz__LightWithIdMonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__RectangleFakeGlowLightWithId_def.hpp"
#include "GlobalNamespace/zzzz__RectangleFakeGlow_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
//  Writing Method size for method: GlobalNamespace::RectangleFakeGlowLightWithId.get_color
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Color (GlobalNamespace::RectangleFakeGlowLightWithId::*)()>(&GlobalNamespace::RectangleFakeGlowLightWithId::get_color)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x226a244;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::RectangleFakeGlowLightWithId>::get(),
                            "get_color",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::RectangleFakeGlowLightWithId.ColorWasSet
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::RectangleFakeGlowLightWithId::*)(UnityEngine::Color)>(&GlobalNamespace::RectangleFakeGlowLightWithId::ColorWasSet)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x226a264;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::RectangleFakeGlowLightWithId),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::RectangleFakeGlowLightWithId>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::RectangleFakeGlowLightWithId._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::RectangleFakeGlowLightWithId::*)()>(&GlobalNamespace::RectangleFakeGlowLightWithId::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x226a290;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::RectangleFakeGlowLightWithId>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::RectangleFakeGlowLightWithId::__set__minAlpha(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::RectangleFakeGlowLightWithId::__get__minAlpha() const {
return ::cordl_internals::getInstanceField<float_t, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::RectangleFakeGlowLightWithId::__set__alphaMul(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::RectangleFakeGlowLightWithId::__get__alphaMul() const {
return ::cordl_internals::getInstanceField<float_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::RectangleFakeGlowLightWithId::__set__rectangleFakeGlow(GlobalNamespace::RectangleFakeGlow value)  {
::cordl_internals::setInstanceField<GlobalNamespace::RectangleFakeGlow, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::RectangleFakeGlow>(value));
}
constexpr GlobalNamespace::RectangleFakeGlow GlobalNamespace::RectangleFakeGlowLightWithId::__get__rectangleFakeGlow() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::RectangleFakeGlow, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
 UnityEngine::Color GlobalNamespace::RectangleFakeGlowLightWithId::get_color()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::RectangleFakeGlowLightWithId>::get(),
                            "get_color",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Color, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::RectangleFakeGlowLightWithId::ColorWasSet(UnityEngine::Color color)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::RectangleFakeGlowLightWithId>::get(),
                            "ColorWasSet",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Color>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, color);
}
// Ctor Parameters []
 GlobalNamespace::RectangleFakeGlowLightWithId::RectangleFakeGlowLightWithId()  : GlobalNamespace::LightWithIdMonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<RectangleFakeGlowLightWithId>())) {}
 void GlobalNamespace::RectangleFakeGlowLightWithId::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::RectangleFakeGlowLightWithId>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
