#pragma once
namespace {
#include "GlobalNamespace/zzzz__IBeatEffectDidFinishEvent_def.hpp"
#include "GlobalNamespace/zzzz__BeatEffect_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::IBeatEffectDidFinishEvent.HandleBeatEffectDidFinish
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::IBeatEffectDidFinishEvent::*)(::GlobalNamespace::BeatEffect)>(&::GlobalNamespace::IBeatEffectDidFinishEvent::HandleBeatEffectDidFinish)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::IBeatEffectDidFinishEvent),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IBeatEffectDidFinishEvent>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
 void ::GlobalNamespace::IBeatEffectDidFinishEvent::HandleBeatEffectDidFinish(::GlobalNamespace::BeatEffect beatEffect)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IBeatEffectDidFinishEvent>::get(),
                            "HandleBeatEffectDidFinish",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatEffect>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, beatEffect);
}
} // end anonymous namespace
