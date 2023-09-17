#pragma once
namespace {
#include "UnityEngine/Rendering/zzzz__OnDemandRendering_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::OnDemandRendering.get_renderFrameInterval
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)()>(&::UnityEngine::Rendering::OnDemandRendering::get_renderFrameInterval)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2b737b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::OnDemandRendering>::get(),
                            "get_renderFrameInterval",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::OnDemandRendering.GetRenderFrameInterval
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<int32_t>)>(&::UnityEngine::Rendering::OnDemandRendering::GetRenderFrameInterval)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2b7380c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::OnDemandRendering>::get(),
                            "GetRenderFrameInterval",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
 void ::UnityEngine::Rendering::OnDemandRendering::__set_m_RenderFrameInterval(int32_t value)  {
::cordl_internals::setStaticField<int32_t, "m_RenderFrameInterval", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::OnDemandRendering>::get>(std::forward<int32_t>(value));
}
 int32_t ::UnityEngine::Rendering::OnDemandRendering::__get_m_RenderFrameInterval()  {
return ::cordl_internals::getStaticField<int32_t, "m_RenderFrameInterval", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::OnDemandRendering>::get>();
}
 int32_t ::UnityEngine::Rendering::OnDemandRendering::get_renderFrameInterval()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::OnDemandRendering>::get(),
                            "get_renderFrameInterval",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method);
}
 void ::UnityEngine::Rendering::OnDemandRendering::GetRenderFrameInterval(ByRef<int32_t> frameInterval)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::OnDemandRendering>::get(),
                            "GetRenderFrameInterval",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, frameInterval);
}
} // end anonymous namespace
