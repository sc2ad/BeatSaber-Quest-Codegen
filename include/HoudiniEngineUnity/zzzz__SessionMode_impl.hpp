#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "HoudiniEngineUnity/zzzz__SessionMode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HoudiniEngineUnity::SessionMode::SessionMode(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::HoudiniEngineUnity::SessionMode::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::HoudiniEngineUnity::SessionMode::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::HoudiniEngineUnity::SessionMode  ::HoudiniEngineUnity::SessionMode::Socket{0};
constexpr ::HoudiniEngineUnity::SessionMode  ::HoudiniEngineUnity::SessionMode::Pipe{1};
} // end anonymous namespace
