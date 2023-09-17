#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "System/zzzz__DTSubStringType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::DTSubStringType::DTSubStringType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::System::DTSubStringType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::DTSubStringType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::System::DTSubStringType  ::System::DTSubStringType::Unknown{0};
constexpr ::System::DTSubStringType  ::System::DTSubStringType::Invalid{1};
constexpr ::System::DTSubStringType  ::System::DTSubStringType::Number{2};
constexpr ::System::DTSubStringType  ::System::DTSubStringType::End{3};
constexpr ::System::DTSubStringType  ::System::DTSubStringType::Other{4};
} // end anonymous namespace
