#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "System/Xml/Schema/zzzz__SchemaType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr System::Xml::Schema::SchemaType::SchemaType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void System::Xml::Schema::SchemaType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Xml::Schema::SchemaType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr System::Xml::Schema::SchemaType  System::Xml::Schema::SchemaType::None{0};
constexpr System::Xml::Schema::SchemaType  System::Xml::Schema::SchemaType::DTD{1};
constexpr System::Xml::Schema::SchemaType  System::Xml::Schema::SchemaType::XDR{2};
constexpr System::Xml::Schema::SchemaType  System::Xml::Schema::SchemaType::XSD{3};
