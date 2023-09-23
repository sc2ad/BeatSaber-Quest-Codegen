#pragma once
#include "GlobalNamespace/zzzz__ReferenceCountingCache_2_impl.hpp"
#include "GlobalNamespace/zzzz__AudioReferenceCountingCache_def.hpp"
//  Writing Method size for method: GlobalNamespace::AudioReferenceCountingCache._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AudioReferenceCountingCache::*)()>(&GlobalNamespace::AudioReferenceCountingCache::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x21a192c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AudioReferenceCountingCache>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters []
 GlobalNamespace::AudioReferenceCountingCache::AudioReferenceCountingCache()  : GlobalNamespace::ReferenceCountingCache_2<int32_t,System::Threading::Tasks::Task_1<UnityEngine::AudioClip>>(THROW_UNLESS(::il2cpp_utils::New<AudioReferenceCountingCache>())) {}
 void GlobalNamespace::AudioReferenceCountingCache::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::AudioReferenceCountingCache>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
