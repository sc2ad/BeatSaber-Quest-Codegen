#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__PS4LocalPlayerAudioSyncHelper_def.hpp"
//  Writing Method size for method: GlobalNamespace::PS4LocalPlayerAudioSyncHelper._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PS4LocalPlayerAudioSyncHelper::*)()>(&GlobalNamespace::PS4LocalPlayerAudioSyncHelper::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x20e9b78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PS4LocalPlayerAudioSyncHelper>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters []
 GlobalNamespace::PS4LocalPlayerAudioSyncHelper::PS4LocalPlayerAudioSyncHelper()  : UnityEngine::MonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<PS4LocalPlayerAudioSyncHelper>())) {}
 void GlobalNamespace::PS4LocalPlayerAudioSyncHelper::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::PS4LocalPlayerAudioSyncHelper>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
