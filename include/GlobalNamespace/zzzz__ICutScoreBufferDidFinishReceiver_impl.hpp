#pragma once
#include "GlobalNamespace/zzzz__ICutScoreBufferDidFinishReceiver_def.hpp"
#include "GlobalNamespace/zzzz__CutScoreBuffer_def.hpp"
//  Writing Method size for method: GlobalNamespace::ICutScoreBufferDidFinishReceiver.HandleCutScoreBufferDidFinish
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ICutScoreBufferDidFinishReceiver::*)(GlobalNamespace::CutScoreBuffer)>(&GlobalNamespace::ICutScoreBufferDidFinishReceiver::HandleCutScoreBufferDidFinish)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::ICutScoreBufferDidFinishReceiver),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ICutScoreBufferDidFinishReceiver>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
 void GlobalNamespace::ICutScoreBufferDidFinishReceiver::HandleCutScoreBufferDidFinish(GlobalNamespace::CutScoreBuffer cutScoreBuffer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ICutScoreBufferDidFinishReceiver>::get(),
                            "HandleCutScoreBufferDidFinish",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::CutScoreBuffer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, cutScoreBuffer);
}
