#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "JetBrains/Annotations/zzzz__ImplicitUseTargetFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::JetBrains::Annotations::ImplicitUseTargetFlags::ImplicitUseTargetFlags(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::JetBrains::Annotations::ImplicitUseTargetFlags::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::JetBrains::Annotations::ImplicitUseTargetFlags::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::JetBrains::Annotations::ImplicitUseTargetFlags  ::JetBrains::Annotations::ImplicitUseTargetFlags::Default{1};
constexpr ::JetBrains::Annotations::ImplicitUseTargetFlags  ::JetBrains::Annotations::ImplicitUseTargetFlags::Itself{1};
constexpr ::JetBrains::Annotations::ImplicitUseTargetFlags  ::JetBrains::Annotations::ImplicitUseTargetFlags::Members{2};
constexpr ::JetBrains::Annotations::ImplicitUseTargetFlags  ::JetBrains::Annotations::ImplicitUseTargetFlags::WithMembers{3};
} // end anonymous namespace
