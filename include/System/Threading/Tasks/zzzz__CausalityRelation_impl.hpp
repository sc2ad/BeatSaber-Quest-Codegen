#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "System/Threading/Tasks/zzzz__CausalityRelation_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Threading::Tasks::CausalityRelation::CausalityRelation(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::System::Threading::Tasks::CausalityRelation::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Threading::Tasks::CausalityRelation::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::System::Threading::Tasks::CausalityRelation  ::System::Threading::Tasks::CausalityRelation::AssignDelegate{0};
constexpr ::System::Threading::Tasks::CausalityRelation  ::System::Threading::Tasks::CausalityRelation::Join{1};
constexpr ::System::Threading::Tasks::CausalityRelation  ::System::Threading::Tasks::CausalityRelation::Choice{2};
constexpr ::System::Threading::Tasks::CausalityRelation  ::System::Threading::Tasks::CausalityRelation::Cancel{3};
constexpr ::System::Threading::Tasks::CausalityRelation  ::System::Threading::Tasks::CausalityRelation::Error{4};
} // end anonymous namespace
