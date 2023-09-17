#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "System/ComponentModel/zzzz__DesignerSerializationVisibility_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::ComponentModel::DesignerSerializationVisibility::DesignerSerializationVisibility(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::System::ComponentModel::DesignerSerializationVisibility::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::ComponentModel::DesignerSerializationVisibility::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::System::ComponentModel::DesignerSerializationVisibility  ::System::ComponentModel::DesignerSerializationVisibility::Hidden{0};
constexpr ::System::ComponentModel::DesignerSerializationVisibility  ::System::ComponentModel::DesignerSerializationVisibility::Visible{1};
constexpr ::System::ComponentModel::DesignerSerializationVisibility  ::System::ComponentModel::DesignerSerializationVisibility::Content{2};
} // end anonymous namespace
