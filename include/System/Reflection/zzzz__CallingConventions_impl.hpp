#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "System/Reflection/zzzz__CallingConventions_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Reflection::CallingConventions::CallingConventions(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::System::Reflection::CallingConventions::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Reflection::CallingConventions::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::System::Reflection::CallingConventions  ::System::Reflection::CallingConventions::Standard{1};
constexpr ::System::Reflection::CallingConventions  ::System::Reflection::CallingConventions::VarArgs{2};
constexpr ::System::Reflection::CallingConventions  ::System::Reflection::CallingConventions::Any{3};
constexpr ::System::Reflection::CallingConventions  ::System::Reflection::CallingConventions::HasThis{32};
constexpr ::System::Reflection::CallingConventions  ::System::Reflection::CallingConventions::ExplicitThis{64};
} // end anonymous namespace
