#pragma once
namespace {
#include "GlobalNamespace/zzzz__IBeatToTimeConvertor_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::IBeatToTimeConvertor.ConvertBeatToTime
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::IBeatToTimeConvertor::*)(float_t)>(&::GlobalNamespace::IBeatToTimeConvertor::ConvertBeatToTime)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::IBeatToTimeConvertor),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IBeatToTimeConvertor>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
 float_t ::GlobalNamespace::IBeatToTimeConvertor::ConvertBeatToTime(float_t beat)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IBeatToTimeConvertor>::get(),
                            "ConvertBeatToTime",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method, beat);
}
} // end anonymous namespace
