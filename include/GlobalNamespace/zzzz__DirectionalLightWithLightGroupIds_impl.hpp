#pragma once
#include "GlobalNamespace/zzzz__RuntimeLightWithLightGroupIds_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__DirectionalLightWithLightGroupIds_def.hpp"
#include "GlobalNamespace/zzzz__DirectionalLight_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::DirectionalLightWithLightGroupIds.ColorWasSet
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DirectionalLightWithLightGroupIds::*)(::UnityEngine::Color)>(&::GlobalNamespace::DirectionalLightWithLightGroupIds::ColorWasSet)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1f9cca8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::DirectionalLightWithLightGroupIds),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DirectionalLightWithLightGroupIds>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DirectionalLightWithLightGroupIds._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DirectionalLightWithLightGroupIds::*)()>(&::GlobalNamespace::DirectionalLightWithLightGroupIds::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x1f9ccc8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DirectionalLightWithLightGroupIds>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::DirectionalLightWithLightGroupIds::__set__directionalLight(::GlobalNamespace::DirectionalLight value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::DirectionalLight, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::DirectionalLight>(value));
}
constexpr ::GlobalNamespace::DirectionalLight ::GlobalNamespace::DirectionalLightWithLightGroupIds::__get__directionalLight() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::DirectionalLight, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void ::GlobalNamespace::DirectionalLightWithLightGroupIds::ColorWasSet(::UnityEngine::Color color)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DirectionalLightWithLightGroupIds>::get(),
                            "ColorWasSet",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, color);
}
// Ctor Parameters []
 ::GlobalNamespace::DirectionalLightWithLightGroupIds::DirectionalLightWithLightGroupIds()  : ::GlobalNamespace::RuntimeLightWithLightGroupIds(THROW_UNLESS(::il2cpp_utils::New<DirectionalLightWithLightGroupIds>())) {}
 void ::GlobalNamespace::DirectionalLightWithLightGroupIds::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DirectionalLightWithLightGroupIds>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
