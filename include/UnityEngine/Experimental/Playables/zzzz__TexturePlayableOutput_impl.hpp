#pragma once
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "UnityEngine/Experimental/Playables/zzzz__TexturePlayableOutput_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableOutputHandle_def.hpp"
#include "UnityEngine/Playables/zzzz__IPlayableOutput_def.hpp"
//  Writing Method size for method: ::UnityEngine::Experimental::Playables::TexturePlayableOutput.GetHandle
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Playables::PlayableOutputHandle (::UnityEngine::Experimental::Playables::TexturePlayableOutput::*)()>(&::UnityEngine::Experimental::Playables::TexturePlayableOutput::GetHandle)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2b7b764;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Playables::TexturePlayableOutput>::get(),
                            "GetHandle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::UnityEngine::Playables::IPlayableOutput
constexpr  ::UnityEngine::Experimental::Playables::TexturePlayableOutput::operator ::UnityEngine::Playables::IPlayableOutput() const {
return ::UnityEngine::Playables::IPlayableOutput(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "m_Handle", ty: "::UnityEngine::Playables::PlayableOutputHandle", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Experimental::Playables::TexturePlayableOutput::TexturePlayableOutput(::UnityEngine::Playables::PlayableOutputHandle m_Handle) noexcept : ::bs_hook::ValueTypeWrapper() {this->m_Handle = m_Handle;
}
constexpr void ::UnityEngine::Experimental::Playables::TexturePlayableOutput::__set_m_Handle(::UnityEngine::Playables::PlayableOutputHandle value)  {
::cordl_internals::setInstanceField<::UnityEngine::Playables::PlayableOutputHandle, 0x0>(this->__instance, std::forward<::UnityEngine::Playables::PlayableOutputHandle>(value));
}
constexpr ::UnityEngine::Playables::PlayableOutputHandle ::UnityEngine::Experimental::Playables::TexturePlayableOutput::__get_m_Handle() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Playables::PlayableOutputHandle, 0x0>(this->__instance);
}
 ::UnityEngine::Playables::PlayableOutputHandle ::UnityEngine::Experimental::Playables::TexturePlayableOutput::GetHandle()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Playables::TexturePlayableOutput>::get(),
                            "GetHandle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::PlayableOutputHandle, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
} // end anonymous namespace
