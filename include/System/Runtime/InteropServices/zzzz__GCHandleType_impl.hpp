#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "System/Runtime/InteropServices/zzzz__GCHandleType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr System::Runtime::InteropServices::GCHandleType::GCHandleType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void System::Runtime::InteropServices::GCHandleType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t System::Runtime::InteropServices::GCHandleType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr System::Runtime::InteropServices::GCHandleType  System::Runtime::InteropServices::GCHandleType::Weak{0};
constexpr System::Runtime::InteropServices::GCHandleType  System::Runtime::InteropServices::GCHandleType::WeakTrackResurrection{1};
constexpr System::Runtime::InteropServices::GCHandleType  System::Runtime::InteropServices::GCHandleType::Normal{2};
constexpr System::Runtime::InteropServices::GCHandleType  System::Runtime::InteropServices::GCHandleType::Pinned{3};
