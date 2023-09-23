#pragma once
#include "GlobalNamespace/zzzz__RuntimeLightWithIds_impl.hpp"
#include "GlobalNamespace/zzzz__PointLightWithIds_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "GlobalNamespace/zzzz__PointLight_def.hpp"
//  Writing Method size for method: GlobalNamespace::PointLightWithIds.ColorWasSet
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PointLightWithIds::*)(UnityEngine::Color)>(&GlobalNamespace::PointLightWithIds::ColorWasSet)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1f9ffb0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::PointLightWithIds),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PointLightWithIds>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::PointLightWithIds._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PointLightWithIds::*)()>(&GlobalNamespace::PointLightWithIds::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x1f9ffd0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PointLightWithIds>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::PointLightWithIds::__set__pointLight(GlobalNamespace::PointLight value)  {
::cordl_internals::setInstanceField<GlobalNamespace::PointLight, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::PointLight>(value));
}
constexpr GlobalNamespace::PointLight GlobalNamespace::PointLightWithIds::__get__pointLight() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::PointLight, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::PointLightWithIds::ColorWasSet(UnityEngine::Color color)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PointLightWithIds>::get(),
                            "ColorWasSet",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Color>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, color);
}
// Ctor Parameters []
 GlobalNamespace::PointLightWithIds::PointLightWithIds()  : GlobalNamespace::RuntimeLightWithIds(THROW_UNLESS(::il2cpp_utils::New<PointLightWithIds>())) {}
 void GlobalNamespace::PointLightWithIds::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PointLightWithIds>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
