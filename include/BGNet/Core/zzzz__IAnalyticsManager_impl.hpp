#pragma once
#include "BGNet/Core/zzzz__IAnalyticsManager_def.hpp"
#include "BGNet/Core/zzzz__AnalyticsMetricUnit_def.hpp"
#include "GlobalNamespace/zzzz__MetricIdentifier_def.hpp"
namespace {
//  Writing Method size for method: BGNet::Core::IAnalyticsManager.UpdateState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::IAnalyticsManager::*)(GlobalNamespace::MetricIdentifier, int64_t, BGNet::Core::AnalyticsMetricUnit, bool)>(&BGNet::Core::IAnalyticsManager::UpdateState)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(BGNet::Core::IAnalyticsManager),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::IAnalyticsManager>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::IAnalyticsManager.UpdateAverage
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::IAnalyticsManager::*)(GlobalNamespace::MetricIdentifier, double_t, BGNet::Core::AnalyticsMetricUnit, bool)>(&BGNet::Core::IAnalyticsManager::UpdateAverage)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(BGNet::Core::IAnalyticsManager),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::IAnalyticsManager>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: BGNet::Core::IAnalyticsManager.IncrementCounter
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BGNet::Core::IAnalyticsManager::*)(GlobalNamespace::MetricIdentifier, int64_t, BGNet::Core::AnalyticsMetricUnit)>(&BGNet::Core::IAnalyticsManager::IncrementCounter)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(BGNet::Core::IAnalyticsManager),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::IAnalyticsManager>::get(),
                                  2
                                ));
    return ___internal_method;
  }
};
/// @brief Convert operator to GlobalNamespace::IPollable
constexpr  BGNet::Core::IAnalyticsManager::operator GlobalNamespace::IPollable() const noexcept {
return GlobalNamespace::IPollable(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::IDisposable
constexpr  BGNet::Core::IAnalyticsManager::operator System::IDisposable() const noexcept {
return System::IDisposable(::bs_hook::Il2CppWrapperType::instance);
}
/// @param unit: BGNet::Core::AnalyticsMetricUnit (default: 0)
/// @param alarmMetric: bool (default: false)
 void BGNet::Core::IAnalyticsManager::UpdateState(GlobalNamespace::MetricIdentifier metricIdentifier, int64_t state, BGNet::Core::AnalyticsMetricUnit unit, bool alarmMetric)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::IAnalyticsManager>::get(),
                            "UpdateState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::MetricIdentifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<BGNet::Core::AnalyticsMetricUnit>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, metricIdentifier, state, unit, alarmMetric);
}
/// @param unit: BGNet::Core::AnalyticsMetricUnit (default: 0)
/// @param alarmMetric: bool (default: false)
 void BGNet::Core::IAnalyticsManager::UpdateAverage(GlobalNamespace::MetricIdentifier metricIdentifier, double_t value, BGNet::Core::AnalyticsMetricUnit unit, bool alarmMetric)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::IAnalyticsManager>::get(),
                            "UpdateAverage",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::MetricIdentifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<BGNet::Core::AnalyticsMetricUnit>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, metricIdentifier, value, unit, alarmMetric);
}
/// @param incrementAmount: int64_t (default: 1)
/// @param unit: BGNet::Core::AnalyticsMetricUnit (default: 1)
 void BGNet::Core::IAnalyticsManager::IncrementCounter(GlobalNamespace::MetricIdentifier metricIdentifier, int64_t incrementAmount, BGNet::Core::AnalyticsMetricUnit unit)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BGNet::Core::IAnalyticsManager>::get(),
                            "IncrementCounter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::MetricIdentifier>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<BGNet::Core::AnalyticsMetricUnit>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, metricIdentifier, incrementAmount, unit);
}
} // end anonymous namespace
