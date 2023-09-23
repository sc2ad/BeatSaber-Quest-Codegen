#pragma once
#include "GlobalNamespace/zzzz__CPUMonitor_def.hpp"
#include "GlobalNamespace/zzzz__ICPUMonitor_def.hpp"
#include "GlobalNamespace/zzzz__IPollable_def.hpp"
#include "GlobalNamespace/zzzz__RollingAverage_def.hpp"
#include "System/Diagnostics/zzzz__Process_def.hpp"
//  Writing Method size for method: GlobalNamespace::CPUMonitor.PollUpdate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CPUMonitor::*)()>(&GlobalNamespace::CPUMonitor::PollUpdate)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0xda541c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::CPUMonitor>::get(),
                            "PollUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::CPUMonitor.get_utilization
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (GlobalNamespace::CPUMonitor::*)()>(&GlobalNamespace::CPUMonitor::get_utilization)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xda5514;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::CPUMonitor>::get(),
                            "get_utilization",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::CPUMonitor._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CPUMonitor::*)()>(&GlobalNamespace::CPUMonitor::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xda553c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::CPUMonitor>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to GlobalNamespace::ICPUMonitor
constexpr  GlobalNamespace::CPUMonitor::operator GlobalNamespace::ICPUMonitor() const noexcept {
return GlobalNamespace::ICPUMonitor(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to GlobalNamespace::IPollable
constexpr  GlobalNamespace::CPUMonitor::operator GlobalNamespace::IPollable() const noexcept {
return GlobalNamespace::IPollable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::CPUMonitor::__set__utilization(GlobalNamespace::RollingAverage value)  {
::cordl_internals::setInstanceField<GlobalNamespace::RollingAverage, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<GlobalNamespace::RollingAverage>(value));
}
constexpr GlobalNamespace::RollingAverage GlobalNamespace::CPUMonitor::__get__utilization() const {
return ::cordl_internals::getInstanceField<GlobalNamespace::RollingAverage, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::CPUMonitor::__set__currentProcess(System::Diagnostics::Process value)  {
::cordl_internals::setInstanceField<System::Diagnostics::Process, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Diagnostics::Process>(value));
}
constexpr System::Diagnostics::Process GlobalNamespace::CPUMonitor::__get__currentProcess() const {
return ::cordl_internals::getInstanceField<System::Diagnostics::Process, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::CPUMonitor::__set__processorCount(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::CPUMonitor::__get__processorCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::CPUMonitor::__set__lastSampleTime(int64_t value)  {
::cordl_internals::setInstanceField<int64_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int64_t>(value));
}
constexpr int64_t GlobalNamespace::CPUMonitor::__get__lastSampleTime() const {
return ::cordl_internals::getInstanceField<int64_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::CPUMonitor::__set__lastSampleValue(int64_t value)  {
::cordl_internals::setInstanceField<int64_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int64_t>(value));
}
constexpr int64_t GlobalNamespace::CPUMonitor::__get__lastSampleValue() const {
return ::cordl_internals::getInstanceField<int64_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void GlobalNamespace::CPUMonitor::PollUpdate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::CPUMonitor>::get(),
                            "PollUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 float_t GlobalNamespace::CPUMonitor::get_utilization()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::CPUMonitor>::get(),
                            "get_utilization",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 GlobalNamespace::CPUMonitor::CPUMonitor()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<CPUMonitor>())) {}
 void GlobalNamespace::CPUMonitor::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::CPUMonitor>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
