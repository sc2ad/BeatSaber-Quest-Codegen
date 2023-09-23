#pragma once
#include "GlobalNamespace/zzzz__ISliderTailDidMovePastCutMarkEvent_def.hpp"
#include "GlobalNamespace/zzzz__SliderController_def.hpp"
//  Writing Method size for method: GlobalNamespace::ISliderTailDidMovePastCutMarkEvent.HandleSliderTailDidMovePastCutMark
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ISliderTailDidMovePastCutMarkEvent::*)(GlobalNamespace::SliderController)>(&GlobalNamespace::ISliderTailDidMovePastCutMarkEvent::HandleSliderTailDidMovePastCutMark)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(GlobalNamespace::ISliderTailDidMovePastCutMarkEvent),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ISliderTailDidMovePastCutMarkEvent>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
 void GlobalNamespace::ISliderTailDidMovePastCutMarkEvent::HandleSliderTailDidMovePastCutMark(GlobalNamespace::SliderController sliderController)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::ISliderTailDidMovePastCutMarkEvent>::get(),
                            "HandleSliderTailDidMovePastCutMark",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::SliderController>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, sliderController);
}
