#pragma once
namespace {
#include "GlobalNamespace/zzzz__ISaberMovementDataProcessor_def.hpp"
#include "GlobalNamespace/zzzz__BladeMovementDataElement_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ISaberMovementDataProcessor.ProcessNewData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ISaberMovementDataProcessor::*)(::GlobalNamespace::BladeMovementDataElement, ::GlobalNamespace::BladeMovementDataElement, bool)>(&::GlobalNamespace::ISaberMovementDataProcessor::ProcessNewData)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::ISaberMovementDataProcessor),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ISaberMovementDataProcessor>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
 void ::GlobalNamespace::ISaberMovementDataProcessor::ProcessNewData(::GlobalNamespace::BladeMovementDataElement newData, ::GlobalNamespace::BladeMovementDataElement prevData, bool prevDataAreValid)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ISaberMovementDataProcessor>::get(),
                            "ProcessNewData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BladeMovementDataElement>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BladeMovementDataElement>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, newData, prevData, prevDataAreValid);
}
} // end anonymous namespace
