#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "System/ComponentModel/zzzz__EditorBrowsableState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::ComponentModel::EditorBrowsableState::EditorBrowsableState(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::System::ComponentModel::EditorBrowsableState::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::ComponentModel::EditorBrowsableState::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::System::ComponentModel::EditorBrowsableState  ::System::ComponentModel::EditorBrowsableState::Always{0};
constexpr ::System::ComponentModel::EditorBrowsableState  ::System::ComponentModel::EditorBrowsableState::Never{1};
constexpr ::System::ComponentModel::EditorBrowsableState  ::System::ComponentModel::EditorBrowsableState::Advanced{2};
} // end anonymous namespace
