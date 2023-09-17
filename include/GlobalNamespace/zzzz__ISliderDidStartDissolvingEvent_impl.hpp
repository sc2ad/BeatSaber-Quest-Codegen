#pragma once
namespace {
#include "GlobalNamespace/zzzz__ISliderDidStartDissolvingEvent_def.hpp"
#include "GlobalNamespace/zzzz__SliderController_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ISliderDidStartDissolvingEvent.HandleSliderDidStartDissolving
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ISliderDidStartDissolvingEvent::*)(::GlobalNamespace::SliderController, float_t)>(&::GlobalNamespace::ISliderDidStartDissolvingEvent::HandleSliderDidStartDissolving)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::ISliderDidStartDissolvingEvent),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ISliderDidStartDissolvingEvent>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
 void ::GlobalNamespace::ISliderDidStartDissolvingEvent::HandleSliderDidStartDissolving(::GlobalNamespace::SliderController sliderController, float_t duration)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ISliderDidStartDissolvingEvent>::get(),
                            "HandleSliderDidStartDissolving",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SliderController>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, sliderController, duration);
}
} // end anonymous namespace
