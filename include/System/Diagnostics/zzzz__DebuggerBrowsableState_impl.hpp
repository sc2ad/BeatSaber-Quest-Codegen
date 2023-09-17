#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "System/Diagnostics/zzzz__DebuggerBrowsableState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Diagnostics::DebuggerBrowsableState::DebuggerBrowsableState(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::System::Diagnostics::DebuggerBrowsableState::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Diagnostics::DebuggerBrowsableState::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::System::Diagnostics::DebuggerBrowsableState  ::System::Diagnostics::DebuggerBrowsableState::Never{0};
constexpr ::System::Diagnostics::DebuggerBrowsableState  ::System::Diagnostics::DebuggerBrowsableState::Collapsed{2};
constexpr ::System::Diagnostics::DebuggerBrowsableState  ::System::Diagnostics::DebuggerBrowsableState::RootHidden{3};
} // end anonymous namespace
