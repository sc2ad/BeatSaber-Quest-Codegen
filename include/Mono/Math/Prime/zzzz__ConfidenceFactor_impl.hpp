#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "Mono/Math/Prime/zzzz__ConfidenceFactor_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr Mono::Math::Prime::ConfidenceFactor::ConfidenceFactor(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void Mono::Math::Prime::ConfidenceFactor::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t Mono::Math::Prime::ConfidenceFactor::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr Mono::Math::Prime::ConfidenceFactor  Mono::Math::Prime::ConfidenceFactor::ExtraLow{0};
constexpr Mono::Math::Prime::ConfidenceFactor  Mono::Math::Prime::ConfidenceFactor::Low{1};
constexpr Mono::Math::Prime::ConfidenceFactor  Mono::Math::Prime::ConfidenceFactor::Medium{2};
constexpr Mono::Math::Prime::ConfidenceFactor  Mono::Math::Prime::ConfidenceFactor::High{3};
constexpr Mono::Math::Prime::ConfidenceFactor  Mono::Math::Prime::ConfidenceFactor::ExtraHigh{4};
constexpr Mono::Math::Prime::ConfidenceFactor  Mono::Math::Prime::ConfidenceFactor::Provable{5};
