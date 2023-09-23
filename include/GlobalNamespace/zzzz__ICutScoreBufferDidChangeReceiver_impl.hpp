#pragma once
#include "GlobalNamespace/zzzz__ICutScoreBufferDidChangeReceiver_def.hpp"
#include "GlobalNamespace/zzzz__CutScoreBuffer_def.hpp"
//  Writing Method size for method: GlobalNamespace::ICutScoreBufferDidChangeReceiver.HandleCutScoreBufferDidChange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ICutScoreBufferDidChangeReceiver::*)(GlobalNamespace::CutScoreBuffer)>(&GlobalNamespace::ICutScoreBufferDidChangeReceiver::HandleCutScoreBufferDidChange)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::ICutScoreBufferDidChangeReceiver),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ICutScoreBufferDidChangeReceiver>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
 void GlobalNamespace::ICutScoreBufferDidChangeReceiver::HandleCutScoreBufferDidChange(GlobalNamespace::CutScoreBuffer cutScoreBuffer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ICutScoreBufferDidChangeReceiver>::get(),
                            "HandleCutScoreBufferDidChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::CutScoreBuffer>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, cutScoreBuffer);
}
