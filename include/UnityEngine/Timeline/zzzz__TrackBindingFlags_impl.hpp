#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "UnityEngine/Timeline/zzzz__TrackBindingFlags_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Timeline::TrackBindingFlags::TrackBindingFlags(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::UnityEngine::Timeline::TrackBindingFlags::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::Timeline::TrackBindingFlags::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::UnityEngine::Timeline::TrackBindingFlags  ::UnityEngine::Timeline::TrackBindingFlags::None{0};
constexpr ::UnityEngine::Timeline::TrackBindingFlags  ::UnityEngine::Timeline::TrackBindingFlags::AllowCreateComponent{1};
constexpr ::UnityEngine::Timeline::TrackBindingFlags  ::UnityEngine::Timeline::TrackBindingFlags::All{1};
} // end anonymous namespace
