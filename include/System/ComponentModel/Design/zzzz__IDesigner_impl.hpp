#pragma once
namespace {
#include "System/ComponentModel/Design/zzzz__IDesigner_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
/// @brief Convert operator to ::System::IDisposable
constexpr  ::System::ComponentModel::Design::IDesigner::operator ::System::IDisposable() const noexcept {
return ::System::IDisposable(::bs_hook::Il2CppWrapperType::instance);
}
} // end anonymous namespace
