#pragma once
#include "GlobalNamespace/zzzz__IUnconnectedConnectionManager_def.hpp"
namespace {
/// @brief Convert operator to GlobalNamespace::IUnconnectedMessageSender
constexpr  GlobalNamespace::IUnconnectedConnectionManager::operator GlobalNamespace::IUnconnectedMessageSender() const noexcept {
return GlobalNamespace::IUnconnectedMessageSender(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to GlobalNamespace::IPollable
constexpr  GlobalNamespace::IUnconnectedConnectionManager::operator GlobalNamespace::IPollable() const noexcept {
return GlobalNamespace::IPollable(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::IDisposable
constexpr  GlobalNamespace::IUnconnectedConnectionManager::operator System::IDisposable() const noexcept {
return System::IDisposable(::bs_hook::Il2CppWrapperType::instance);
}
} // end anonymous namespace
