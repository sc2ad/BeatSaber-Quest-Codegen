#pragma once
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "Oculus/Platform/zzzz__LivestreamingMicrophoneStatus_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Oculus::Platform::LivestreamingMicrophoneStatus::LivestreamingMicrophoneStatus(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::Oculus::Platform::LivestreamingMicrophoneStatus::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::Oculus::Platform::LivestreamingMicrophoneStatus::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::Oculus::Platform::LivestreamingMicrophoneStatus  ::Oculus::Platform::LivestreamingMicrophoneStatus::Unknown{0};
constexpr ::Oculus::Platform::LivestreamingMicrophoneStatus  ::Oculus::Platform::LivestreamingMicrophoneStatus::MicrophoneOn{1};
constexpr ::Oculus::Platform::LivestreamingMicrophoneStatus  ::Oculus::Platform::LivestreamingMicrophoneStatus::MicrophoneOff{2};
} // end anonymous namespace
