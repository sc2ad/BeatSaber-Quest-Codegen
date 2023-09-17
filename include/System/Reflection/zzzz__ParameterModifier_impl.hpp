#pragma once
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "System/Reflection/zzzz__ParameterModifier_def.hpp"
// Ctor Parameters [CppParam { name: "_byRef", ty: "::ArrayW<bool>", modifiers: "", def_value: Some("csnull") }]
constexpr ::System::Reflection::ParameterModifier::ParameterModifier(::ArrayW<bool> _byRef) noexcept : ::bs_hook::ValueTypeWrapper() {this->_byRef = _byRef;
}
constexpr void ::System::Reflection::ParameterModifier::__set__byRef(::ArrayW<bool> value)  {
::cordl_internals::setInstanceField<::ArrayW<bool>, 0x0>(this->__instance, std::forward<::ArrayW<bool>>(value));
}
constexpr ::ArrayW<bool> ::System::Reflection::ParameterModifier::__get__byRef() const {
return ::cordl_internals::getInstanceField<::ArrayW<bool>, 0x0>(this->__instance);
}
} // end anonymous namespace
