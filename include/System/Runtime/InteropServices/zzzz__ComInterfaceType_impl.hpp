#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "System/Runtime/InteropServices/zzzz__ComInterfaceType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Runtime::InteropServices::ComInterfaceType::ComInterfaceType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::System::Runtime::InteropServices::ComInterfaceType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::System::Runtime::InteropServices::ComInterfaceType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::System::Runtime::InteropServices::ComInterfaceType  ::System::Runtime::InteropServices::ComInterfaceType::InterfaceIsDual{0};
constexpr ::System::Runtime::InteropServices::ComInterfaceType  ::System::Runtime::InteropServices::ComInterfaceType::InterfaceIsIUnknown{1};
constexpr ::System::Runtime::InteropServices::ComInterfaceType  ::System::Runtime::InteropServices::ComInterfaceType::InterfaceIsIDispatch{2};
constexpr ::System::Runtime::InteropServices::ComInterfaceType  ::System::Runtime::InteropServices::ComInterfaceType::InterfaceIsIInspectable{3};
} // end anonymous namespace
