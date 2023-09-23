#pragma once
#include "UnityEngine/Playables/zzzz__IPlayable_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableHandle_def.hpp"
//  Writing Method size for method: UnityEngine::Playables::IPlayable.GetHandle
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Playables::PlayableHandle (UnityEngine::Playables::IPlayable::*)()>(&UnityEngine::Playables::IPlayable::GetHandle)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::Playables::IPlayable),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Playables::IPlayable>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
 UnityEngine::Playables::PlayableHandle UnityEngine::Playables::IPlayable::GetHandle()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Playables::IPlayable>::get(),
                            "GetHandle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Playables::PlayableHandle, false>(const_cast<void*>(instance), ___internal_method);
}
