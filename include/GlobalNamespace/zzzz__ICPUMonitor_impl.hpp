#pragma once
namespace {
#include "GlobalNamespace/zzzz__ICPUMonitor_def.hpp"
#include "GlobalNamespace/zzzz__IPollable_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ICPUMonitor.get_utilization
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::ICPUMonitor::*)()>(&::GlobalNamespace::ICPUMonitor::get_utilization)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::GlobalNamespace::ICPUMonitor),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ICPUMonitor>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::GlobalNamespace::IPollable
constexpr  ::GlobalNamespace::ICPUMonitor::operator ::GlobalNamespace::IPollable() const noexcept {
return ::GlobalNamespace::IPollable(::bs_hook::Il2CppWrapperType::instance);
}
 float_t ::GlobalNamespace::ICPUMonitor::get_utilization()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ICPUMonitor>::get(),
                            "get_utilization",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
