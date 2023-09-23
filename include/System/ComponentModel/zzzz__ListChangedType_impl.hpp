#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "System/ComponentModel/zzzz__ListChangedType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr System::ComponentModel::ListChangedType::ListChangedType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void System::ComponentModel::ListChangedType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::ComponentModel::ListChangedType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr System::ComponentModel::ListChangedType  System::ComponentModel::ListChangedType::Reset{0};
constexpr System::ComponentModel::ListChangedType  System::ComponentModel::ListChangedType::ItemAdded{1};
constexpr System::ComponentModel::ListChangedType  System::ComponentModel::ListChangedType::ItemDeleted{2};
constexpr System::ComponentModel::ListChangedType  System::ComponentModel::ListChangedType::ItemMoved{3};
constexpr System::ComponentModel::ListChangedType  System::ComponentModel::ListChangedType::ItemChanged{4};
constexpr System::ComponentModel::ListChangedType  System::ComponentModel::ListChangedType::PropertyDescriptorAdded{5};
constexpr System::ComponentModel::ListChangedType  System::ComponentModel::ListChangedType::PropertyDescriptorDeleted{6};
constexpr System::ComponentModel::ListChangedType  System::ComponentModel::ListChangedType::PropertyDescriptorChanged{7};
