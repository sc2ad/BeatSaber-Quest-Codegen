#pragma once
namespace {
#include "GlobalNamespace/zzzz__ISaberSwingRatingCounterDidChangeReceiver_def.hpp"
#include "GlobalNamespace/zzzz__ISaberSwingRatingCounter_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ISaberSwingRatingCounterDidChangeReceiver.HandleSaberSwingRatingCounterDidChange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ISaberSwingRatingCounterDidChangeReceiver::*)(::GlobalNamespace::ISaberSwingRatingCounter, float_t)>(&::GlobalNamespace::ISaberSwingRatingCounterDidChangeReceiver::HandleSaberSwingRatingCounterDidChange)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::ISaberSwingRatingCounterDidChangeReceiver),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ISaberSwingRatingCounterDidChangeReceiver>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
 void ::GlobalNamespace::ISaberSwingRatingCounterDidChangeReceiver::HandleSaberSwingRatingCounterDidChange(::GlobalNamespace::ISaberSwingRatingCounter saberSwingRatingCounter, float_t rating)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ISaberSwingRatingCounterDidChangeReceiver>::get(),
                            "HandleSaberSwingRatingCounterDidChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ISaberSwingRatingCounter>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, saberSwingRatingCounter, rating);
}
} // end anonymous namespace
