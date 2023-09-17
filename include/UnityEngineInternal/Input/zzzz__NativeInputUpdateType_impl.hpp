#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "UnityEngineInternal/Input/zzzz__NativeInputUpdateType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngineInternal::Input::NativeInputUpdateType::NativeInputUpdateType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::UnityEngineInternal::Input::NativeInputUpdateType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngineInternal::Input::NativeInputUpdateType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::UnityEngineInternal::Input::NativeInputUpdateType  ::UnityEngineInternal::Input::NativeInputUpdateType::Dynamic{1};
constexpr ::UnityEngineInternal::Input::NativeInputUpdateType  ::UnityEngineInternal::Input::NativeInputUpdateType::Fixed{2};
constexpr ::UnityEngineInternal::Input::NativeInputUpdateType  ::UnityEngineInternal::Input::NativeInputUpdateType::BeforeRender{4};
constexpr ::UnityEngineInternal::Input::NativeInputUpdateType  ::UnityEngineInternal::Input::NativeInputUpdateType::Editor{8};
constexpr ::UnityEngineInternal::Input::NativeInputUpdateType  ::UnityEngineInternal::Input::NativeInputUpdateType::IgnoreFocus{-2147483648};
} // end anonymous namespace
