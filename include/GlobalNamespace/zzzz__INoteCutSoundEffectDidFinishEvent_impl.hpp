#pragma once
namespace {
#include "GlobalNamespace/zzzz__INoteCutSoundEffectDidFinishEvent_def.hpp"
#include "GlobalNamespace/zzzz__NoteCutSoundEffect_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::INoteCutSoundEffectDidFinishEvent.HandleNoteCutSoundEffectDidFinish
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::INoteCutSoundEffectDidFinishEvent::*)(::GlobalNamespace::NoteCutSoundEffect)>(&::GlobalNamespace::INoteCutSoundEffectDidFinishEvent::HandleNoteCutSoundEffectDidFinish)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::INoteCutSoundEffectDidFinishEvent),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::INoteCutSoundEffectDidFinishEvent>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
 void ::GlobalNamespace::INoteCutSoundEffectDidFinishEvent::HandleNoteCutSoundEffectDidFinish(::GlobalNamespace::NoteCutSoundEffect noteCutSoundEffect)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::INoteCutSoundEffectDidFinishEvent>::get(),
                            "HandleNoteCutSoundEffectDidFinish",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteCutSoundEffect>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, noteCutSoundEffect);
}
} // end anonymous namespace
