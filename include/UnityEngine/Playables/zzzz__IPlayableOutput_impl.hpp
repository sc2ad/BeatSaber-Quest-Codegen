#pragma once
namespace {
#include "UnityEngine/Playables/zzzz__IPlayableOutput_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableOutputHandle_def.hpp"
//  Writing Method size for method: ::UnityEngine::Playables::IPlayableOutput.GetHandle
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Playables::PlayableOutputHandle (::UnityEngine::Playables::IPlayableOutput::*)()>(&::UnityEngine::Playables::IPlayableOutput::GetHandle)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::Playables::IPlayableOutput),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::IPlayableOutput>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
 ::UnityEngine::Playables::PlayableOutputHandle ::UnityEngine::Playables::IPlayableOutput::GetHandle()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::IPlayableOutput>::get(),
                            "GetHandle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::PlayableOutputHandle, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
