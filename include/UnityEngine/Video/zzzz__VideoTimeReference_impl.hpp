#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "UnityEngine/Video/zzzz__VideoTimeReference_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Video::VideoTimeReference::VideoTimeReference(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::UnityEngine::Video::VideoTimeReference::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::Video::VideoTimeReference::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::UnityEngine::Video::VideoTimeReference  ::UnityEngine::Video::VideoTimeReference::Freerun{0};
constexpr ::UnityEngine::Video::VideoTimeReference  ::UnityEngine::Video::VideoTimeReference::InternalTime{1};
constexpr ::UnityEngine::Video::VideoTimeReference  ::UnityEngine::Video::VideoTimeReference::ExternalTime{2};
} // end anonymous namespace
