#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "System/Reflection/zzzz__MemberTypes_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr System::Reflection::MemberTypes::MemberTypes(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void System::Reflection::MemberTypes::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Reflection::MemberTypes::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr System::Reflection::MemberTypes  System::Reflection::MemberTypes::Constructor{1};
constexpr System::Reflection::MemberTypes  System::Reflection::MemberTypes::Event{2};
constexpr System::Reflection::MemberTypes  System::Reflection::MemberTypes::Field{4};
constexpr System::Reflection::MemberTypes  System::Reflection::MemberTypes::Method{8};
constexpr System::Reflection::MemberTypes  System::Reflection::MemberTypes::Property{16};
constexpr System::Reflection::MemberTypes  System::Reflection::MemberTypes::TypeInfo{32};
constexpr System::Reflection::MemberTypes  System::Reflection::MemberTypes::Custom{64};
constexpr System::Reflection::MemberTypes  System::Reflection::MemberTypes::NestedType{128};
constexpr System::Reflection::MemberTypes  System::Reflection::MemberTypes::All{191};
