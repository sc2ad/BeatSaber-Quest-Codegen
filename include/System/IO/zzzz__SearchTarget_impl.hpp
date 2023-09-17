#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "System/IO/zzzz__SearchTarget_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::IO::SearchTarget::SearchTarget(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::System::IO::SearchTarget::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::IO::SearchTarget::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::System::IO::SearchTarget  ::System::IO::SearchTarget::Files{1};
constexpr ::System::IO::SearchTarget  ::System::IO::SearchTarget::Directories{2};
constexpr ::System::IO::SearchTarget  ::System::IO::SearchTarget::Both{3};
} // end anonymous namespace
