#pragma once
#include "GlobalNamespace/zzzz__IHealthCheckService_def.hpp"
#include "GlobalNamespace/zzzz__IPollable_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
/// @brief Convert operator to GlobalNamespace::IPollable
constexpr  GlobalNamespace::IHealthCheckService::operator GlobalNamespace::IPollable() const noexcept {
return GlobalNamespace::IPollable(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::IDisposable
constexpr  GlobalNamespace::IHealthCheckService::operator System::IDisposable() const noexcept {
return System::IDisposable(::bs_hook::Il2CppWrapperType::instance);
}
