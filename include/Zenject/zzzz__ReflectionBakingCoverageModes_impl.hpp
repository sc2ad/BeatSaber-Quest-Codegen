#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "Zenject/zzzz__ReflectionBakingCoverageModes_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr Zenject::ReflectionBakingCoverageModes::ReflectionBakingCoverageModes(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void Zenject::ReflectionBakingCoverageModes::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t Zenject::ReflectionBakingCoverageModes::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr Zenject::ReflectionBakingCoverageModes  Zenject::ReflectionBakingCoverageModes::FallbackToDirectReflection{0};
constexpr Zenject::ReflectionBakingCoverageModes  Zenject::ReflectionBakingCoverageModes::NoCheckAssumeFullCoverage{1};
constexpr Zenject::ReflectionBakingCoverageModes  Zenject::ReflectionBakingCoverageModes::FallbackToDirectReflectionWithWarning{2};
