#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "System/Resources/zzzz__UltimateResourceFallbackLocation_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Resources::UltimateResourceFallbackLocation::UltimateResourceFallbackLocation(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::System::Resources::UltimateResourceFallbackLocation::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Resources::UltimateResourceFallbackLocation::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::System::Resources::UltimateResourceFallbackLocation  ::System::Resources::UltimateResourceFallbackLocation::MainAssembly{0};
constexpr ::System::Resources::UltimateResourceFallbackLocation  ::System::Resources::UltimateResourceFallbackLocation::Satellite{1};
} // end anonymous namespace
