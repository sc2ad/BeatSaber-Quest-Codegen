#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__CompilationRelaxations_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr System::Runtime::CompilerServices::CompilationRelaxations::CompilationRelaxations(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void System::Runtime::CompilerServices::CompilationRelaxations::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Runtime::CompilerServices::CompilationRelaxations::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr System::Runtime::CompilerServices::CompilationRelaxations  System::Runtime::CompilerServices::CompilationRelaxations::NoStringInterning{8};
