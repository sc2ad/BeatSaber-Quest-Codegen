#pragma once
#include "GlobalNamespace/zzzz__LightWithIdMonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__EnableRendererWithLightId_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Renderer_def.hpp"
//  Writing Method size for method: GlobalNamespace::EnableRendererWithLightId.ColorWasSet
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EnableRendererWithLightId::*)(UnityEngine::Color)>(&GlobalNamespace::EnableRendererWithLightId::ColorWasSet)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x1f9ccf8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::EnableRendererWithLightId),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::EnableRendererWithLightId>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::EnableRendererWithLightId._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::EnableRendererWithLightId::*)()>(&GlobalNamespace::EnableRendererWithLightId::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x1f9cd3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::EnableRendererWithLightId>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::EnableRendererWithLightId::__set__renderer(UnityEngine::Renderer value)  {
::cordl_internals::setInstanceField<UnityEngine::Renderer, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Renderer>(value));
}
constexpr UnityEngine::Renderer GlobalNamespace::EnableRendererWithLightId::__get__renderer() const {
return ::cordl_internals::getInstanceField<UnityEngine::Renderer, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::EnableRendererWithLightId::__set__hideAlphaRangeMin(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::EnableRendererWithLightId::__get__hideAlphaRangeMin() const {
return ::cordl_internals::getInstanceField<float_t, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::EnableRendererWithLightId::__set__hideAlphaRangeMax(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x3c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t GlobalNamespace::EnableRendererWithLightId::__get__hideAlphaRangeMax() const {
return ::cordl_internals::getInstanceField<float_t, 0x3c>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::EnableRendererWithLightId::ColorWasSet(UnityEngine::Color color)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::EnableRendererWithLightId>::get(),
                            "ColorWasSet",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Color>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, color);
}
// Ctor Parameters []
 GlobalNamespace::EnableRendererWithLightId::EnableRendererWithLightId()  : GlobalNamespace::LightWithIdMonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<EnableRendererWithLightId>())) {}
 void GlobalNamespace::EnableRendererWithLightId::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::EnableRendererWithLightId>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
