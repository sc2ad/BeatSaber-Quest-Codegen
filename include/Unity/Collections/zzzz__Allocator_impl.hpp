#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "Unity/Collections/zzzz__Allocator_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Collections::Allocator::Allocator(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::Unity::Collections::Allocator::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::Unity::Collections::Allocator::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::Unity::Collections::Allocator  ::Unity::Collections::Allocator::Invalid{0};
constexpr ::Unity::Collections::Allocator  ::Unity::Collections::Allocator::None{1};
constexpr ::Unity::Collections::Allocator  ::Unity::Collections::Allocator::Temp{2};
constexpr ::Unity::Collections::Allocator  ::Unity::Collections::Allocator::TempJob{3};
constexpr ::Unity::Collections::Allocator  ::Unity::Collections::Allocator::Persistent{4};
constexpr ::Unity::Collections::Allocator  ::Unity::Collections::Allocator::AudioKernel{5};
} // end anonymous namespace
