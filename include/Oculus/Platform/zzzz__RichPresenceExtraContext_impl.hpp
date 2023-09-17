#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "Oculus/Platform/zzzz__RichPresenceExtraContext_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Oculus::Platform::RichPresenceExtraContext::RichPresenceExtraContext(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::Oculus::Platform::RichPresenceExtraContext::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::Oculus::Platform::RichPresenceExtraContext::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::Oculus::Platform::RichPresenceExtraContext  ::Oculus::Platform::RichPresenceExtraContext::Unknown{0};
constexpr ::Oculus::Platform::RichPresenceExtraContext  ::Oculus::Platform::RichPresenceExtraContext::None{1};
constexpr ::Oculus::Platform::RichPresenceExtraContext  ::Oculus::Platform::RichPresenceExtraContext::CurrentCapacity{2};
constexpr ::Oculus::Platform::RichPresenceExtraContext  ::Oculus::Platform::RichPresenceExtraContext::StartedAgo{3};
constexpr ::Oculus::Platform::RichPresenceExtraContext  ::Oculus::Platform::RichPresenceExtraContext::EndingIn{4};
constexpr ::Oculus::Platform::RichPresenceExtraContext  ::Oculus::Platform::RichPresenceExtraContext::LookingForAMatch{5};
} // end anonymous namespace
