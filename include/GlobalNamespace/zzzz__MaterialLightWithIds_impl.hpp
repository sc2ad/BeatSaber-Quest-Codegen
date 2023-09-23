#pragma once
#include "GlobalNamespace/zzzz__RuntimeLightWithIds_impl.hpp"
#include "GlobalNamespace/zzzz__MaterialLightWithIds_def.hpp"
#include "UnityEngine/zzzz__MaterialPropertyBlock_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MeshRenderer_def.hpp"
//  Writing Method size for method: GlobalNamespace::MaterialLightWithIds.Awake
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MaterialLightWithIds::*)()>(&GlobalNamespace::MaterialLightWithIds::Awake)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x1f9f344;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::MaterialLightWithIds),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MaterialLightWithIds>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MaterialLightWithIds.ColorWasSet
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MaterialLightWithIds::*)(UnityEngine::Color)>(&GlobalNamespace::MaterialLightWithIds::ColorWasSet)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x1f9f3c8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::MaterialLightWithIds),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MaterialLightWithIds>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::MaterialLightWithIds._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MaterialLightWithIds::*)()>(&GlobalNamespace::MaterialLightWithIds::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1f9f508;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MaterialLightWithIds>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::MaterialLightWithIds::__set__meshRenderer(UnityEngine::MeshRenderer value)  {
::cordl_internals::setInstanceField<UnityEngine::MeshRenderer, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::MeshRenderer>(value));
}
constexpr UnityEngine::MeshRenderer GlobalNamespace::MaterialLightWithIds::__get__meshRenderer() const {
return ::cordl_internals::getInstanceField<UnityEngine::MeshRenderer, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MaterialLightWithIds::__set__setAlphaOnly(bool value)  {
::cordl_internals::setInstanceField<bool, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::MaterialLightWithIds::__get__setAlphaOnly() const {
return ::cordl_internals::getInstanceField<bool, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MaterialLightWithIds::__set__alphaIntoColor(bool value)  {
::cordl_internals::setInstanceField<bool, 0x51>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::MaterialLightWithIds::__get__alphaIntoColor() const {
return ::cordl_internals::getInstanceField<bool, 0x51>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MaterialLightWithIds::__set__setColorOnly(bool value)  {
::cordl_internals::setInstanceField<bool, 0x52>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::MaterialLightWithIds::__get__setColorOnly() const {
return ::cordl_internals::getInstanceField<bool, 0x52>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MaterialLightWithIds::__set__colorProperty(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW GlobalNamespace::MaterialLightWithIds::__get__colorProperty() const {
return ::cordl_internals::getInstanceField<::StringW, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::MaterialLightWithIds::__set__materialPropertyBlock(UnityEngine::MaterialPropertyBlock value)  {
::cordl_internals::setStaticField<UnityEngine::MaterialPropertyBlock, "_materialPropertyBlock", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MaterialLightWithIds>::get>(std::forward<UnityEngine::MaterialPropertyBlock>(value));
}
 UnityEngine::MaterialPropertyBlock GlobalNamespace::MaterialLightWithIds::__get__materialPropertyBlock()  {
return ::cordl_internals::getStaticField<UnityEngine::MaterialPropertyBlock, "_materialPropertyBlock", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MaterialLightWithIds>::get>();
}
constexpr void GlobalNamespace::MaterialLightWithIds::__set__color(UnityEngine::Color value)  {
::cordl_internals::setInstanceField<UnityEngine::Color, 0x60>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Color>(value));
}
constexpr UnityEngine::Color GlobalNamespace::MaterialLightWithIds::__get__color() const {
return ::cordl_internals::getInstanceField<UnityEngine::Color, 0x60>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MaterialLightWithIds::__set__alpha(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x70>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::MaterialLightWithIds::__get__alpha() const {
return ::cordl_internals::getInstanceField<float_t, 0x70>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::MaterialLightWithIds::__set__propertyId(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x74>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::MaterialLightWithIds::__get__propertyId() const {
return ::cordl_internals::getInstanceField<int32_t, 0x74>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::MaterialLightWithIds::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MaterialLightWithIds>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::MaterialLightWithIds::ColorWasSet(UnityEngine::Color color)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MaterialLightWithIds>::get(),
                            "ColorWasSet",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Color>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, color);
}
// Ctor Parameters []
 GlobalNamespace::MaterialLightWithIds::MaterialLightWithIds()  : GlobalNamespace::RuntimeLightWithIds(THROW_UNLESS(::il2cpp_utils::New<MaterialLightWithIds>())) {}
 void GlobalNamespace::MaterialLightWithIds::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::MaterialLightWithIds>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
