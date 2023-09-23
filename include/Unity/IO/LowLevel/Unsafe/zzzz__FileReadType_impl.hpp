#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "Unity/IO/LowLevel/Unsafe/zzzz__FileReadType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr Unity::IO::LowLevel::Unsafe::FileReadType::FileReadType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void Unity::IO::LowLevel::Unsafe::FileReadType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t Unity::IO::LowLevel::Unsafe::FileReadType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr Unity::IO::LowLevel::Unsafe::FileReadType  Unity::IO::LowLevel::Unsafe::FileReadType::Sync{0};
constexpr Unity::IO::LowLevel::Unsafe::FileReadType  Unity::IO::LowLevel::Unsafe::FileReadType::Async{1};
