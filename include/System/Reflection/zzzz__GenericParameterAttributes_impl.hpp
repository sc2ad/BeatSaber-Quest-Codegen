#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "System/Reflection/zzzz__GenericParameterAttributes_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr System::Reflection::GenericParameterAttributes::GenericParameterAttributes(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void System::Reflection::GenericParameterAttributes::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Reflection::GenericParameterAttributes::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr System::Reflection::GenericParameterAttributes  System::Reflection::GenericParameterAttributes::None{0};
constexpr System::Reflection::GenericParameterAttributes  System::Reflection::GenericParameterAttributes::VarianceMask{3};
constexpr System::Reflection::GenericParameterAttributes  System::Reflection::GenericParameterAttributes::Covariant{1};
constexpr System::Reflection::GenericParameterAttributes  System::Reflection::GenericParameterAttributes::Contravariant{2};
constexpr System::Reflection::GenericParameterAttributes  System::Reflection::GenericParameterAttributes::SpecialConstraintMask{28};
constexpr System::Reflection::GenericParameterAttributes  System::Reflection::GenericParameterAttributes::ReferenceTypeConstraint{4};
constexpr System::Reflection::GenericParameterAttributes  System::Reflection::GenericParameterAttributes::NotNullableValueTypeConstraint{8};
constexpr System::Reflection::GenericParameterAttributes  System::Reflection::GenericParameterAttributes::DefaultConstructorConstraint{16};
