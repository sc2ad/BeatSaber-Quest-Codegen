#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "Unity/IO/LowLevel/Unsafe/zzzz__ProcessingState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::IO::LowLevel::Unsafe::ProcessingState::ProcessingState(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::Unity::IO::LowLevel::Unsafe::ProcessingState::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::Unity::IO::LowLevel::Unsafe::ProcessingState::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::Unity::IO::LowLevel::Unsafe::ProcessingState  ::Unity::IO::LowLevel::Unsafe::ProcessingState::Unknown{0};
constexpr ::Unity::IO::LowLevel::Unsafe::ProcessingState  ::Unity::IO::LowLevel::Unsafe::ProcessingState::InQueue{1};
constexpr ::Unity::IO::LowLevel::Unsafe::ProcessingState  ::Unity::IO::LowLevel::Unsafe::ProcessingState::Reading{2};
constexpr ::Unity::IO::LowLevel::Unsafe::ProcessingState  ::Unity::IO::LowLevel::Unsafe::ProcessingState::Completed{3};
constexpr ::Unity::IO::LowLevel::Unsafe::ProcessingState  ::Unity::IO::LowLevel::Unsafe::ProcessingState::Failed{4};
constexpr ::Unity::IO::LowLevel::Unsafe::ProcessingState  ::Unity::IO::LowLevel::Unsafe::ProcessingState::Canceled{5};
} // end anonymous namespace
