#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "Unity/Collections/zzzz__NativeArrayOptions_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Collections::NativeArrayOptions::NativeArrayOptions(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::Unity::Collections::NativeArrayOptions::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::Unity::Collections::NativeArrayOptions::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::Unity::Collections::NativeArrayOptions  ::Unity::Collections::NativeArrayOptions::UninitializedMemory{0};
constexpr ::Unity::Collections::NativeArrayOptions  ::Unity::Collections::NativeArrayOptions::ClearMemory{1};
} // end anonymous namespace