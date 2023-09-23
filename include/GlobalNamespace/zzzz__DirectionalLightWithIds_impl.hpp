#pragma once
#include "GlobalNamespace/zzzz__RuntimeLightWithIds_impl.hpp"
#include "GlobalNamespace/zzzz__DirectionalLightWithIds_def.hpp"
#include "GlobalNamespace/zzzz__DirectionalLight_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
//  Writing Method size for method: GlobalNamespace::DirectionalLightWithIds.ColorWasSet
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::DirectionalLightWithIds::*)(UnityEngine::Color)>(&GlobalNamespace::DirectionalLightWithIds::ColorWasSet)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x1f9cbd8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::DirectionalLightWithIds),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::DirectionalLightWithIds>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::DirectionalLightWithIds._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::DirectionalLightWithIds::*)()>(&GlobalNamespace::DirectionalLightWithIds::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x1f9cc1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::DirectionalLightWithIds>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::DirectionalLightWithIds::__set__directionalLight(GlobalNamespace::DirectionalLight value)  {
::cordl_internals::setInstanceField<GlobalNamespace::DirectionalLight, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::DirectionalLight>(value));
}
constexpr GlobalNamespace::DirectionalLight GlobalNamespace::DirectionalLightWithIds::__get__directionalLight() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::DirectionalLight, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::DirectionalLightWithIds::__set__setIntensityOnly(bool value)  {
::cordl_internals::setInstanceField<bool, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool GlobalNamespace::DirectionalLightWithIds::__get__setIntensityOnly() const {
return ::cordl_internals::getInstanceField<bool, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::DirectionalLightWithIds::__set__defaultColor(UnityEngine::Color value)  {
::cordl_internals::setInstanceField<UnityEngine::Color, 0x54>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Color>(value));
}
constexpr UnityEngine::Color GlobalNamespace::DirectionalLightWithIds::__get__defaultColor() const {
return ::cordl_internals::getInstanceField<UnityEngine::Color, 0x54>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::DirectionalLightWithIds::ColorWasSet(UnityEngine::Color color)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::DirectionalLightWithIds>::get(),
                            "ColorWasSet",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Color>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, color);
}
// Ctor Parameters []
 GlobalNamespace::DirectionalLightWithIds::DirectionalLightWithIds()  : GlobalNamespace::RuntimeLightWithIds(THROW_UNLESS(::il2cpp_utils::New<DirectionalLightWithIds>())) {}
 void GlobalNamespace::DirectionalLightWithIds::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::DirectionalLightWithIds>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
