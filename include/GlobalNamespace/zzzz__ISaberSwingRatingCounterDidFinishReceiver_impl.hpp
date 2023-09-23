#pragma once
#include "GlobalNamespace/zzzz__ISaberSwingRatingCounterDidFinishReceiver_def.hpp"
#include "GlobalNamespace/zzzz__ISaberSwingRatingCounter_def.hpp"
//  Writing Method size for method: GlobalNamespace::ISaberSwingRatingCounterDidFinishReceiver.HandleSaberSwingRatingCounterDidFinish
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ISaberSwingRatingCounterDidFinishReceiver::*)(GlobalNamespace::ISaberSwingRatingCounter)>(&GlobalNamespace::ISaberSwingRatingCounterDidFinishReceiver::HandleSaberSwingRatingCounterDidFinish)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::ISaberSwingRatingCounterDidFinishReceiver),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ISaberSwingRatingCounterDidFinishReceiver>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
 void GlobalNamespace::ISaberSwingRatingCounterDidFinishReceiver::HandleSaberSwingRatingCounterDidFinish(GlobalNamespace::ISaberSwingRatingCounter saberSwingRatingCounter)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ISaberSwingRatingCounterDidFinishReceiver>::get(),
                            "HandleSaberSwingRatingCounterDidFinish",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::ISaberSwingRatingCounter>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, saberSwingRatingCounter);
}
