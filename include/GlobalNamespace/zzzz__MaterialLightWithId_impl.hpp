#pragma once
#include "GlobalNamespace/zzzz__LightWithIdMonoBehaviour_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__MaterialLightWithId_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MeshRenderer_def.hpp"
#include "UnityEngine/zzzz__MaterialPropertyBlock_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MaterialLightWithId.get_color
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (::GlobalNamespace::MaterialLightWithId::*)()>(&::GlobalNamespace::MaterialLightWithId::get_color)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1f9f0cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MaterialLightWithId>::get(),
                            "get_color",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MaterialLightWithId.Awake
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MaterialLightWithId::*)()>(&::GlobalNamespace::MaterialLightWithId::Awake)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1f9f0d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MaterialLightWithId>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MaterialLightWithId.ColorWasSet
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MaterialLightWithId::*)(::UnityEngine::Color)>(&::GlobalNamespace::MaterialLightWithId::ColorWasSet)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x1f9f158;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::MaterialLightWithId),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MaterialLightWithId>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MaterialLightWithId._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MaterialLightWithId::*)()>(&::GlobalNamespace::MaterialLightWithId::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x1f9f2e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MaterialLightWithId>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::MaterialLightWithId::__set__meshRenderer(::UnityEngine::MeshRenderer value)  {
::cordl_internals::setInstanceField<::UnityEngine::MeshRenderer, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::MeshRenderer>(value));
}
constexpr ::UnityEngine::MeshRenderer ::GlobalNamespace::MaterialLightWithId::__get__meshRenderer() const {
return ::cordl_internals::getInstanceField<::UnityEngine::MeshRenderer, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::MaterialLightWithId::__set__setAlphaOnly(bool value)  {
::cordl_internals::setInstanceField<bool, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::GlobalNamespace::MaterialLightWithId::__get__setAlphaOnly() const {
return ::cordl_internals::getInstanceField<bool, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::MaterialLightWithId::__set__alphaIntoColor(bool value)  {
::cordl_internals::setInstanceField<bool, 0x39>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::GlobalNamespace::MaterialLightWithId::__get__alphaIntoColor() const {
return ::cordl_internals::getInstanceField<bool, 0x39>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::MaterialLightWithId::__set__setColorOnly(bool value)  {
::cordl_internals::setInstanceField<bool, 0x3a>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::GlobalNamespace::MaterialLightWithId::__get__setColorOnly() const {
return ::cordl_internals::getInstanceField<bool, 0x3a>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::MaterialLightWithId::__set__colorProperty(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::GlobalNamespace::MaterialLightWithId::__get__colorProperty() const {
return ::cordl_internals::getInstanceField<::StringW, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::MaterialLightWithId::__set__alphaIntensity(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::MaterialLightWithId::__get__alphaIntensity() const {
return ::cordl_internals::getInstanceField<float_t, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::MaterialLightWithId::__set__multiplyColorWithAlpha(bool value)  {
::cordl_internals::setInstanceField<bool, 0x4c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::GlobalNamespace::MaterialLightWithId::__get__multiplyColorWithAlpha() const {
return ::cordl_internals::getInstanceField<bool, 0x4c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::MaterialLightWithId::__set__multiplyColor(bool value)  {
::cordl_internals::setInstanceField<bool, 0x4d>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::GlobalNamespace::MaterialLightWithId::__get__multiplyColor() const {
return ::cordl_internals::getInstanceField<bool, 0x4d>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::MaterialLightWithId::__set__colorMultiplier(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::MaterialLightWithId::__get__colorMultiplier() const {
return ::cordl_internals::getInstanceField<float_t, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void ::GlobalNamespace::MaterialLightWithId::__set__materialPropertyBlock(::UnityEngine::MaterialPropertyBlock value)  {
::cordl_internals::setStaticField<::UnityEngine::MaterialPropertyBlock, "_materialPropertyBlock", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MaterialLightWithId>::get>(std::forward<::UnityEngine::MaterialPropertyBlock>(value));
}
 ::UnityEngine::MaterialPropertyBlock ::GlobalNamespace::MaterialLightWithId::__get__materialPropertyBlock()  {
return ::cordl_internals::getStaticField<::UnityEngine::MaterialPropertyBlock, "_materialPropertyBlock", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MaterialLightWithId>::get>();
}
constexpr void ::GlobalNamespace::MaterialLightWithId::__set__color(::UnityEngine::Color value)  {
::cordl_internals::setInstanceField<::UnityEngine::Color, 0x54>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::Color>(value));
}
constexpr ::UnityEngine::Color ::GlobalNamespace::MaterialLightWithId::__get__color() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Color, 0x54>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::MaterialLightWithId::__set__alpha(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x64>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::GlobalNamespace::MaterialLightWithId::__get__alpha() const {
return ::cordl_internals::getInstanceField<float_t, 0x64>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::MaterialLightWithId::__set__propertyId(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x68>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::GlobalNamespace::MaterialLightWithId::__get__propertyId() const {
return ::cordl_internals::getInstanceField<int32_t, 0x68>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::UnityEngine::Color ::GlobalNamespace::MaterialLightWithId::get_color()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MaterialLightWithId>::get(),
                            "get_color",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::MaterialLightWithId::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MaterialLightWithId>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::GlobalNamespace::MaterialLightWithId::ColorWasSet(::UnityEngine::Color color)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MaterialLightWithId>::get(),
                            "ColorWasSet",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, color);
}
// Ctor Parameters []
 ::GlobalNamespace::MaterialLightWithId::MaterialLightWithId()  : ::GlobalNamespace::LightWithIdMonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<MaterialLightWithId>())) {}
 void ::GlobalNamespace::MaterialLightWithId::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MaterialLightWithId>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
